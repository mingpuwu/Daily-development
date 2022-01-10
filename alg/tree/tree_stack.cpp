#include<stack>
#include<iostream>
#include<memory.h>

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
总结：后访问哪个哪个后入栈
*/
void PreOrderStack(BiTree tree)
{
    if(!tree)
    {
        return;
    }

    std::stack<BiNode*> s;
    s.push(tree);

    while (!s.empty())
    {
        BiNode* node = s.top();
        printf(" current data is %d\n",node->data);
        s.pop();
        if(node->right)
            s.push(node->right);
        if(node->left)
            s.push(node->left);
    }

}

/*
总结：需要一个辅助栈，是先序版的改版
先序是：头左右
先序的改版是：头右左（只需要修改压栈的顺序即先压栈左边再压栈右边）
那么反过来就是后序，做法：出栈的时候放到另一个栈中
*/
void PosOrderStack(BiTree tree)
{
    if(!tree)
        return;

    std::stack<BiNode*> s;
    std::stack<BiNode*> s1;
    s.push(tree);

    while(!s.empty())
    {
        BiNode* node = s.top();
        s1.push(node);
        s.pop();

        if(node->left)
            s.push(node->left);

        if(node->right)
            s.push(node->right);
    }

    while (!s1.empty())
    {
        BiNode* node = s1.top();
        printf("data is %d\n",node->data);
        s1.pop();
    }

}

int main()
{
    BiTree tree = CreadTreeNode(1);
    tree->left = CreadTreeNode(2);
    tree->right = CreadTreeNode(3);
    tree->left->left = CreadTreeNode(4);
    tree->left->right = CreadTreeNode(5);
    tree->right->left = CreadTreeNode(6);
    tree->right->right = CreadTreeNode(7);

    PosOrderStack(tree);
}