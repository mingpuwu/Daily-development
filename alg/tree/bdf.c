#include <stdio.h>
#include <stdlib.h>

typedef struct mytree
{
    int data;
    struct mytree *left;
    struct mytree *right;
}mytree;

void init_mytree(mytree *targ)
{
    targ = (mytree*)malloc(sizeof(mytree));
    printf("%p\n",targ);
    //cout<<targ<<endl;
    targ->data = 0;
    targ->left = NULL;
    targ->right = NULL;
}

void creatmytree_node(int val, mytree *t)
{
    t = (mytree*)malloc(sizeof(mytree));
    t->data = val;
    t->left = NULL;
    t->right = NULL;
}

void mytree_foreach(mytree *t)
{
    if(!t)
        return;
    //cout<<t->data<<endl;
    mytree_foreach(t->left);
    mytree_foreach(t->right);
}

int main()
{
    printf("%p\n",t);
    //cout<<t<<endl;

    creatmytree_node(1,t.left);
    printf("222\n");
    //cout<<"55"<<endl;
    creatmytree_node(2,t.left);
    creatmytree_node(3,t.left);
    creatmytree_node(4,t.left);

    return 0;
}