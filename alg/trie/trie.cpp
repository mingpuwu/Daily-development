/*
前缀树，字典树
*/

#include<string>
#include<iostream>
#include<vector>

using namespace std;

struct Node{
    int pass = 0;
    int end = 0;
    Node *next[26] = {nullptr};

   Node(int p, int e)
   {
       pass = p;
       end = e;
   }

   ~Node()
   {
        for(int i = 0; i< 26; i++)
	{
	    if(next[i] != nullptr )
            {
	        delete next[i];
                next[i] = nullptr;
	    }
	}
   }
};

Node* TireCreate()
{
    return new Node(0,0);
}

void InsertWord(Node* root, string word)
{
    if(root == nullptr)
        return;
    
    if(SearchString(root, word) > 0)
        return;
    
    Node* node = root;
    node->pass++;

    for(auto i: word)
    {
        int index = i-'a';
        if(node->next[index] == nullptr)
	{
	    node->next[index] == new Node(1,0);
	}

	node = node->next[index];
    } 
   
    node->end++;
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

int deleteWord(Node* root, string word)
{
    if(SearchString(root, word) != 0)
    {
        Node* node = root;
	node->pass--;

        for(auto i : word)
        {
            int index = i-'a';
            node = root->next[index];
            if(--node->pass == 0)
            {
                //底下所有的节点都需要释放掉
                delete node;
            }
        }
    }
}
