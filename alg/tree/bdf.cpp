#include <queue>
#include <iostream>
using namespace std;

typedef struct mytree
{
    int data;
    struct mytree *left;
    struct mytree *right;
}mytree;

mytree* creatmytree_node(int val)
{
    mytree* t = (mytree*)malloc(sizeof(mytree));
    t->data = val;
    t->left = NULL;
    t->right = NULL;
    return t;
}

void mytree_foreach(mytree *t)
{
    if(!t)
        return;
    cout<<t->data<<endl;
    mytree_foreach(t->left);
    mytree_foreach(t->right);
}

int main()
{
    mytree *t = NULL;
    t = creatmytree_node(1);
    t->left = creatmytree_node(2);
    t->right = creatmytree_node(3);
    t->left->left = creatmytree_node(4);
    t->left->right = creatmytree_node(5);

    mytree_foreach(t);
    return 0;
}