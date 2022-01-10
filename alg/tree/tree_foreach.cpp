#include<cstdio>
#include<cstdlib>

using namespace std;

/*总结:
1.通过不同的访问位置就可以做到不同的遍历顺序
2.树的构造方式一般就这么简单的写?
*/
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
    printf("%d\n",node->data);
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

    printf("Preorder raversal of binary tree is \n");
    //printPreorder(root);
    //printf("\nInorder raversal of binary tree is \n");
    printInorder(root);
    //printf("\nPostorder raversal of binary tree is \n");
    //printPostorder(root);
    return 0;
}