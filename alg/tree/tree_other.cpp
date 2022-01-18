#include<stack>
#include<queue>
#include<iostream>
#include<map>

/*
判断是否为完全二叉树
判断是否为满二叉树
判断是否为搜索二叉树
*/

typedef struct BiNode{
    int data;
    struct BiNode *left;
    struct BiNode *right;
}BiNode,*BiTree;

BiNode* CreadTreeNode(int data)
{
    BiNode *node = (BiNode*)malloc(sizeof(BiNode));
    if(!node)
    {
        printf("malloc node is error\n");
        return nullptr;
    }

    node->data = data;
    node->left = nullptr;
    node->right = nullptr;

    return node;
}

/*
按照中序遍历，并且必须为增序
有一个静态变量去存储当前的值
*/

bool isBinarySort(BiTree tree)
{
    static int currentdata = 0;
    if(tree == nullptr)
        return true;

    if(!isBinarySort(tree->left))
        return false;

    if(currentdata > tree->data)
        return false;
    else
        currentdata = tree->data;

    if(!isBinarySort(tree->right))
        return false;

    return true;
}

int main()
{
    BiTree tree = CreadTreeNode(4);
    tree->left = CreadTreeNode(2);
    tree->right = CreadTreeNode(6);
    tree->left->left = CreadTreeNode(1);
    tree->left->right = CreadTreeNode(3);
    tree->right->left = CreadTreeNode(5);
    tree->right->right = CreadTreeNode(7);

    if(isBinarySort(tree) == true)
        printf("binary is true\n");
    else
        printf("binary is false\n");
}