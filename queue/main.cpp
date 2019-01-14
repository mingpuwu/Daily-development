#include <iostream>

typedef struct node{
    void *data;
    struct node *next;
}node;

typedef struct queue{
    node *first;
    node *end;
    int nodes;
}queue;


int linkqueue_creat(queue *q)
{
    q->first =q->end = (node*)malloc(sizeof(node));
    if(!q->first||!q->end)
        return -1;
    q->nodes = 0;
    return 0;
}

int linkqueue_append(queue *q,node *n)
{
    n = (node*)malloc(sizeof(node));
    q->end = n;
    q->end->next=NULL;
    q->nodes++;
    return  0;
}

int linkqueue_dequeue(queue *q, node *n)
{
    n = q->first;
    q->first = q->first->next;
    return 0;
}

int main() {
    struct queue linkqueue;
    node n;
    linkqueue_creat(&linkqueue);
    for(int i;i<10;i++)
        linkqueue_append(&linkqueue,&n);
    std::cout<<linkqueue.nodes<<std::endl;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}