#include <stdlib.h>
#include <stdbool.h>
#include <iostream>

typedef struct Ralate
{
    int lc, rc;
} Ralate;

typedef struct BTNode
{
    int num;
    struct BTNode *lc, *rc;
} BTNode;

int seqn[500000], k;

void CreateBTree(Ralate rec[], BTNode *addr[], int root)
{
    if (root == 0)
        return;
    BTNode *t = addr[root];
    if (rec[root].lc)
    {
        BTNode *p1 = (BTNode *)malloc(sizeof(BTNode));
        addr[rec[root].lc] = p1;
        p1->num = rec[root].lc;
        p1->lc = NULL;
        p1->rc = NULL;
        t->lc = p1;
        CreateBTree(rec, addr, rec[root].lc);
    }
    else
        t->lc = NULL;

    if (rec[root].rc)
    {
        BTNode *p2 = (BTNode *)malloc(sizeof(BTNode));
        addr[rec[root].rc] = p2;
        p2->num = rec[root].rc;
        p2->lc = NULL;
        p2->rc = NULL;
        t->rc = p2;
        CreateBTree(rec, addr, rec[root].rc);
    }
    else
        t->rc = NULL;
}

int main()
{
    int n, root;
    while (~scanf("%d %d", &n, &root))
    {
        Ralate rec[500001];
        for (int i = 0; i < n; i++)
        {
            int k;
            scanf("%d", &k);
            scanf("%d %d", &rec[k].lc, &rec[k].rc);
        }
        BTNode *addr[500001];
        addr[0] = NULL;
        BTNode *T = (BTNode *)malloc(sizeof(BTNode));
        addr[root] = T;
        T->num = root;
        T->lc = NULL;
        T->rc = NULL;
        CreateBTree(rec, addr, root);
    }


    return 0;
}