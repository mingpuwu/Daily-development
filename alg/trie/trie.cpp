/*
前缀树，字典树
*/

#include <string>
#include <iostream>
#include <vector>
#include <memory.h>

#define MaxNum 26

using namespace std;

struct Node
{
    int pass = 0;
    int end = 0;
    char c = 0;
    Node *next[MaxNum] = {nullptr};

    Node(int p, int e,char c)
    {
        this->pass = p;
        this->end = e;
        this->c = c;
    }
};

int SearchString(Node *root, string word)
{
    if (root == nullptr)
        return 0;

    Node *node = root;

    for (auto i : word)
    {
        int index = i - 'a';
        node = node->next[index];
        if (node == nullptr)
            return 0;
    }

    return node->end;
}


//指针操作的时候务必注意，不能断链
void InsertWord(Node *root, string word)
{
    if (root == nullptr)
        return;

    if (SearchString(root, word) > 0)
        return;

    Node *node = root;
    node->pass++;

    for (auto i : word)
    {
        int index = i - 'a';
        if (node->next[index] == nullptr)
        {
            node->next[index] = new Node(0, 0, i);
        }
        node = node->next[index];
        node->pass++;
    }

    node->end++;
}

int PrefixWord(Node *root, string word)
{
    if (root == nullptr)
        return 0;

    Node *node = root;

    for (auto i : word)
    {
        int index = i - 'a';
        node = node->next[index];
        if (node == nullptr)
            return 0;
    }

    return node->pass;
}

//使用递归方式释放底下所有节点
void deleteNode(Node* node)
{
    if(node == nullptr)
        return;

    for(int i = 0; i < MaxNum; i++)
    {
        deleteNode(node->next[i]);
    }

    std::cout<<"delete node :"<<node->c<<std::endl;
    delete node;
}

int DeleteWord(Node *root, string word)
{
    if (SearchString(root, word) != 0)
    {
        Node *node = root;
        node->pass--;

        for (auto i : word)
        {
            int index = i - 'a';
            node = node->next[index];
            if (--node->pass == 0)
            {
                //底下所有的节点都需要释放掉
                deleteNode(node);
            }
        }
    }
}

int main()
{
    Node* root = new Node(0,0,0);
    InsertWord(root, "renxinrui");
    InsertWord(root,"wumingpu");
    //InsertWord(root,"wumingpi");

    DeleteWord(root,"wumingpu");
}