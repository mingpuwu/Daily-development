#include <iostream>
using namespace std;

typedef struct data{

}data;

struct node{
    data *data;
    struct node* next=NULL;
};


void list_creat(struct node *node,int num)
{
    struct node *head =NULL;
    struct node *tail = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    head->next=NULL;
    node = head;
    tail = head;
    for(int i = 1;i<num;i++)
    {
        struct node *newnode = NULL;
        newnode = (struct node*)malloc(sizeof(struct node));
        tail->next = newnode;
        cout<<"point is "<<tail->next<<endl;
        tail = newnode;
    }
    cout<<"head is "<<head<<endl;
    cout<<"!!!!!!!!!!!! "<<node<<endl;
}

void list_insert(struct node *node,data *data,int pos)
{
    struct node* newnode =(struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    for (int i = 1; i < pos; i++) {
        if (node != NULL)
            node = node->next;
    }
    newnode->next = node->next;
    cout<<newnode->next<<endl;
    node->next = newnode;
}

void delete_node(struct node* node,int pos)
{
    cout<<"node point is"<<node<<endl;
    for(int i = 1;i<pos;i++)
    {
        node = node->next;
    }
    node->next = node->next->next;
    free(node->next);
}

int main() {

    struct node *mylist =NULL;
    list_creat(mylist,5);
    cout<<"my list "<<mylist<<endl;
    delete_node(mylist,3);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}