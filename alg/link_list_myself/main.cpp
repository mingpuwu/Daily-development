#include <iostream>
using namespace std;

//总结：
/*
1.链表反转都写成反转整个的，即任务链表为无头的，这样写更方便。如果需要头节点可以单独拎出来后处理
2.
*/


typedef struct node{
    int data;
    struct node* next=NULL;
}node, *list;


list list_creat(int num)
{
    struct node *head =NULL;
    struct node *tail = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    head->data = -1;
    head->next=NULL;
    list rlist = head;
    tail = head;
    for(int i = 0; i< num; i++)
    {
        node *newnode = NULL;
        newnode = (node*)malloc(sizeof(node));
        newnode->data = i;
        newnode->next = NULL;
        tail->next = newnode;
        tail = newnode;
    }

    return rlist;
}


//插入指定节点处(从开始数)，如果为1，代表插入1的位置
void list_insert(list arglist,int data,int pos)
{
    if(!arglist)
        return;
    node * currentnode = arglist;

    struct node* newnode =(struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    int i = 0;
    while (i < pos && currentnode)
    {
        currentnode = currentnode->next;
        i++;
    }

    if(!currentnode)
        return;

    newnode->next = currentnode->next;
    cout<<newnode->next<<endl;
    currentnode->next = newnode;
}

void delete_node(list arglist,int pos)
{
    int i = 0;
    node* currentnode = arglist;
    while(i < pos && currentnode)
    {
        currentnode = currentnode->next;
        i++;
    }

    if(!currentnode)
        return;

    node* tmp = currentnode->next;
    currentnode->next = currentnode->next->next;
    free(tmp);
}

void foreach_list(list arglist)
{
    printf("~~~~~~~~~~~\n");
    node* onenode = arglist;
    while (onenode)
    {
        printf("node is %d\n",onenode->data);
        onenode = onenode->next;
    }
}

//头插法逆序
//把数据插入到了另一个里面，这个需要深拷贝？
list revert_list1(list arglist)
{
    if(!arglist)
        return NULL;

    list resultlist = list_creat(0);

    node* currentnode = arglist->next;
    while (currentnode)
    {
        list_insert(resultlist,currentnode->data,0);
        currentnode = currentnode->next;
    }

    return resultlist;
}

//就地反转法，不需要单独创建另一个链表
//对除头节点之外的节点做反转
//http://c.biancheng.net/view/8105.html
//总结：三个指针，依次往后
list revert_list2(list head)
{
    if(!head || !head->next)
        return head;

    node* beg = NULL;
    node* mid = head;
    node* end = head->next;

    while(1)
    {
        mid->next = beg;

        if(!end->next) break;

        beg = mid;
        mid = end;
        end = end->next;
    }

    end->next = mid;

    return end;
}


//递归方法反转链表
//对除头节点之外的节点做反转
//https://zhuanlan.zhihu.com/p/86745433
node* revert_recursion(list head)
{
    //base case 只有一个节点了，返回他自己
    if(head->next == NULL) return head;

    //不要递归的想，只需要知道该函数的最后表现是什么样子：反转head->next之后的链表
    //返回的是反转后的头节点指针
    node* last = revert_recursion(head->next);

    //当前head的下一个指针指向头
    head->next->next = head;

    //现在头节点就是尾节点，指向空
    head->next = NULL;


    return last;
}

//头插法(不单独创建新链表)
//对除头节点之外的节点做反转
//总结：需要有两个指针去控制，务必注意head和beg是有区别的
list revert_list4(list head)
{
    if(!head || !head->next)
        return head;

    node* beg = head;
    node* end = head->next;

    while(end)
    {
        beg->next = end->next;
        end->next = head;
        head = end;

        end = beg->next;
    }

    return head;
}

list merge_list(list list1,list list2)
{
    if(!list1 && !list2)
        return NULL;

    node* listp1 = list1->next;
    node* listp2 = list2->next;
    list newlist = list_creat(0);

    while(listp1)
    {
        if(listp1->data > listp2->data)
        {
            newlist
        }
    }
}

int main() {

    list mylist = list_creat(5);
    foreach_list(mylist);

    // list_insert(mylist, 10, 3);

    // foreach_list(mylist);

    // delete_node(mylist, 3);
    // foreach_list(mylist);

    //list revertlist = revert_list1(mylist);
    //foreach_list(revertlist);

    //对除头节点之外的节点做反转
    //list revertlist = revert_recursion(mylist->next);
    //mylist->next = revertlist;
    //foreach_list(mylist);

    //
    //list revertlist2 = revert_list2(mylist->next);
    //mylist->next = revertlist2;
    //foreach_list(mylist);

    list revertlist4 = revert_list4(mylist->next);
    mylist->next = revertlist4;
    foreach_list(mylist);
    return 0;
}