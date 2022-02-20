/*
前缀树，字典树
*/

#include<string>
#include<iostream>
#include<vector>
#include<memory.h>

#define MaxNum 26

using namespace std;

typedef struct Node{
    int pass;
    int end;
    Node *next[MaxNum];

    Node()
    {
        pass = 0;
        end = 0;
        memset(next, 0, sizeof(Node)*MaxNum);
    }
}Node;

int TireCreate(Node* root)
{
    root = new Node();
}

int prefixWord(Node* root, string word)
{
    if(root == nullptr)
        return 0;

    Node* node = root;

    for(auto i : word)
    {
        int index = i-'a';
        node = root->next[index];
        if(node == nullptr)
            return 0;
    }

    return node->pass;
}

int SearchString(Node* root, string word)
{
    if(root == nullptr)
        return 0;

    Node* node = root;

    for(auto i : word)
    {
        int index = i-'a';
        node = root->next[index];
        if(node == nullptr)
            return 0;
    }

    return node->end;
}

void deleteNode(Node* node)
{
    if (node == nullptr)
        return;

    for(int i = 0; i< 26; i++)
    {
        deleteNode(node->next[i]);
    }

    delete node;
    node = nullptr;
}

int deleteWord(Node* root, string word)
{
    if(SearchString(root, word) != 0)
    {
        Node* node = root;
        for(auto i : word)
        {
            int index = i-'a';
            node = root->next[index];
            if(--node->pass == 0)
            {
                //底下所有的节点都需要释放掉
                deleteNode(node);
            }
        }
        node->end--;
    }
}

void InsetWord(Node* root, string word)
{
    if(root == nullptr)
        return;

    Node* node = root;

    for(auto i: word)
    {
        int index = i - 'a';
        if(node->next[index] == nullptr)
        {
            node->next[index] == new Node();
        }
        node->next[index]->pass++;

        node = node->next[index];
    }

    node->end++;
}