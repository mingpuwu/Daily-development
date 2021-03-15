#include<cstdio>
#include<cstdlib>

using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* newNode(int data)
{
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return node;
}

void printPostorder(struct node* node)
{
    if(node == NULL)
        return;
    printPostorder(node->left);
    printPostorder(node->right);
    printf("%d ",node->data);
}

void printInorder(struct node* node)
{
    if(node==NULL){
        return;
    }
    printInorder(node->left);
    printf("%d ",node->data);
    printInorder(node->right);
}

//先序遍历
void printPreorder(struct node* node)
{
    if(node==NULL)
    {
        return;
    }
    printf("%d ",node->data);
    printPreorder(node->left);
    printPreorder(node->right);
}
int main()
{
    struct node *root=newNode(1);
    root->left=newNode(2);
    root->right=newNode(3);
    root->left->left=newNode(4);
    root->left->right=newNode(5);
    root->right->left=newNode(6);
    root->right->right=newNode(7);
    root->left->left->left=newNode(8);
    root->left->left->right=newNode(9);
    root->left->right->left=newNode(10);
    root->left->right->right=newNode(11);
    root->right->left->left=newNode(12);
    root->right->left->right=newNode(13);
    root->right->right->left=newNode(14);
    root->right->right->right=newNode(15);

    printf("Preorder raversal of binary tree is \n");
    printPreorder(root);
    //printf("\nInorder raversal of binary tree is \n");
    //printInorder(root);
    //printf("\nPostorder raversal of binary tree is \n");
    //printPostorder(root);
    return 0;
}