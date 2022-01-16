#include<stack>
#include<iostream>
#include<memory.h>
#include<queue>

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
总结：
基本套路：出栈，打印，有右右入栈，有左左入栈，循环
后访问哪个哪个后入栈
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

/*
总结：左边全部入栈，之后弹出，打印，右入栈，循环
*/
void InOrderStack(BiTree head)
{
    if(head == nullptr)
    {
        printf("111\n");
        return;
    }

    std::stack<BiNode*> s;

    while (!s.empty() or head != nullptr)
    {
        if(head != nullptr)
        {
            s.push(head);
            head = head->left;
        }
        else
        {
            head = s.top();
            printf("node data is %d\n",head->data);
            s.pop();
            head = head->right;
        }
    }
}

/*
树的广度优先需要有一个辅助FIFO(queue)(先进先出)
出队，打印，左节点入队，右节点入队，循环
*/
void BreadthFirst(BiTree tree)
{
    if(tree == nullptr)
        return;

    std::queue<BiNode*> q;
    q.push(tree);

    while (!q.empty())
    {
        BiNode* node = q.front();
        printf("node data %d\n",node->data);
        q.pop();
        if(node->left)
            q.push(node->left);

        if(node->right)
            q.push(node->right);
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

    BreadthFirst(tree);
}