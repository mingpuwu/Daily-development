/*
前缀树，字典树
*/

#include<string>
#include<iostream>
#include<vector>

using namespace std;

typedef struct Node{
    int pass;
    int end;
    Node *next;

    Node()
    {
        pass = 0;
        end = 0;
        next = new Node[26]();
    }
}Node;

int TireCreate(Node* root)
{

}

int prefixWord(Node* root, string word)
{
    if(root == nullptr)
        return 0;

    Node* node = root;

    for(auto i : word)
    {
        int index = i-'a';
        node = &root->next[index];
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
        node = &root->next[index];
        if(node == nullptr)
            return 0;
    }

    return node->end;
}

int deleteWord(Node* root, string word)
{
    if(SearchString(root, word) != 0)
    {
        Node* node = root;
        for(auto i : word)
        {
            int index = i-'a';
            node = &root->next[index];
            if(--node->pass == 0)
            {
                //底下所有的节点都需要释放掉

            }
        }
        node->end--;
    }
}