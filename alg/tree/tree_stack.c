#include<stdio.h>

/*总结：
1.c语言版的需要自己的做栈
2.
*/

typedef struct treenode{
    int data;
    struct treenode* left;
    struct treenode* right;
}treenode;

typedef struct stack
{
    treenode **top;
    treenode **base;
    int size;
}stack;


int init_stack(stack *s)
{
    s->base = malloc(sizeof(treenode*)*100);
    s->top = s->base;
    //printf("%d\n",sizeof(treenode));
    //printf("%p\n",s->top);
    s->size = 5;
    return 0;
}

int stackempty(stack *s)
{
    if(s->top-s->base <= 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int push(stack *s, treenode *n)
{
    if((s->top-s->base) >= s->size)
    {
        s->base = realloc(s->base, (s->size+10)*sizeof(treenode*));
        s->top = s->base+s->size;
        s->size = s->size+10;
    }
    s->top++;
    //printf("top ++ %p\n",s->top);
    *(s->top) = n;
    return 0;
}

treenode* pop(stack *s)
{
    treenode *rmp = NULL;
    if (s->top != s->base)
    {
        rmp = *(s->top);
        s->top--;
    }
    return rmp;
}

struct treenode* newNode(int data)
{
    struct treenode* node = (struct treenode*)malloc(sizeof(struct treenode));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return node;
}

void printfpreorder(treenode *node)
{
    if(node == NULL)
        return;

    printfpreorder(node->left);
    printf("%d\n",node->data);
    printfpreorder(node->right);
}

void feidigui(treenode *node)
{
    stack s;
    init_stack(&s);

    treenode *tmp = node;
    while(tmp||!stackempty(&s))
    {
        while(tmp)
        {
            push(&s,tmp);
            //printf("stack size %d\n",s.top-s.base);
            tmp = tmp->left;
        }

        if(!stackempty(&s))
        {
            tmp = pop(&s);
            printf("%d\n",tmp->data);
            tmp = tmp->right;
        }
    }
}

int main()
{
    treenode *treeroot = newNode(1);
    treeroot->left = newNode(2);
    treeroot->right = newNode(3);
    treeroot->left->left = newNode(4);
    treeroot->left->right = newNode(5);
    treeroot->right->left = newNode(6);
    treeroot->right->right = newNode(7);

    printfpreorder(treeroot);
    printf("digui\n");


    feidigui(treeroot);

}