#include <iostream>
#define INIT_SIZE 100

typedef struct data{
    int num;
    char name;
}data;
using namespace std;

struct linklist{
    data *elem;
    int num;
    struct linklist *next=NULL;
};

int linklist_init(linklist *list)
{
    list->elem = (data*)malloc(sizeof(data));
    if(!list->elem)
        return  -1;
    list->next=NULL;
    return 0;
}

struct linklist *list_creat(int n)
{
    struct linklist *head;
    struct linklist *tail_tmp;
    head = (linklist*)malloc(sizeof(linklist));
    head->next = head;
    tail_tmp =head;
    for(int i=0;i<=n;i++){
        struct linklist *node;
        node = (linklist*)malloc(sizeof(linklist));
        node->num = i;
        std::cout<<i<<std::endl;
        if(tail_tmp == head) {
            head->next = node;
            tail_tmp = node;
        }
        else {
            tail_tmp->next = node;
            tail_tmp = node;
        }
    }
    tail_tmp->next =NULL;
    return head;
}

int linklist_getnode(linklist *list,int pos,data *d)
{
    if(pos>INIT_SIZE)
        return -1;
    int j=1;
    struct linklist *p = list;
    while(p&&j<pos-1) {
        p = p->next;
        j++;
    }
    d = p->elem;
    return 0;
}

void dump_list(struct linklist* list)
{
    struct linklist *tmp_node;
    for(tmp_node = list->next;tmp_node!=NULL;tmp_node = tmp_node->next)
        cout<<tmp_node->num<<endl;
}


int linklist_insert(struct linklist *list,int pos,data *d)
{
    struct linklist *p = list;
    int j =0;
    while(p&&j<pos-1){//找到第pos个节点
        p = p->next;
        j++;
    }
    struct linklist *newnode = (struct linklist *)malloc(sizeof(struct linklist));
    if(!newnode)
        return -1;
    newnode->elem = d;//将信息存入节点
    if(p->next)
        newnode->next=p->next;
    p = newnode;
    return 0 ;
}

int main() {
    struct linklist * list = list_creat(5);
    dump_list(list);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}