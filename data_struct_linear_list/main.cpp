#include <iostream>
#define LIST_INIT_SIZE  100
#define LIST_INCREMENT  10


typedef struct data{
    int num;
    int name;
}data;

struct linear_list{
    data* elem;
    int list_size;
    int length;
};

int list_init(linear_list *list){
    list->elem =(data*)malloc(sizeof(data));
    if(!list->elem)
        return -1;
    list->length = 0;
    list->list_size=LIST_INIT_SIZE;
    return 0;
}

int list_insert(linear_list* list,data d,int pos){
    if(pos<1||pos>list->list_size)
        return -1;
    if(list->length>=list->list_size){
        list->elem = (data*)realloc(list->elem,(LIST_INIT_SIZE+LIST_INCREMENT)* sizeof(data));
        list->list_size = LIST_INIT_SIZE+LIST_INCREMENT;
    }
    data* q = &list->elem[pos-1];
    data* p = &list->elem[list->length-1];
    for(p;p>=q;--p)
        *(p+1) = *p;
    *q = d;
    list->length++;
    return 0;
}

int list_delect(linear_list *list,int pos){
    if(pos>list->length || pos<1)
        return -1;
    data *p = &list->elem[pos-1];
    data *e = list->elem+list->length-1;
    for(p;p<=e;p++)
        p = p+1;
    list->length--;
    return 0;
}

linear_list* list_merge(linear_list *list1,linear_list *list2){
    data *pa = list1->elem;
    data *pb = list2->elem;
    int new_length = list1->length+list2->length;
    linear_list *list_new = (linear_list*)malloc(new_length);
    data *pa_end = &list1->elem[list1->length];
    data *pb_end = &list2->elem[list2->length];
    while(pa<=pa_end&&pb<=pb_end){
        if(pa->num<=pb->num){
            *list_new->elem++ = *pa++;
        }
        else *list_new->elem++ = *pb++;
    }

    while(pa<=pa_end) *list_new->elem++ = *pa++;
    while(pb<=pb_end) *list_new->elem++ = *pb++;
    return list_new;
}

int main() {
    using namespace std;
    linear_list list;
    if(list_init(&list)<0)
        cout<<"list init error"<<endl;
    data d;
    //cout<< sizeof(list)<<endl;
    d.num =10;
    d.name = 1;
    for(d.name = 1;d.name<=10;d.name++)
        list_insert(&list,d,1);
    cout<<"list length:"<<list.length<<endl;
    list_delect(&list,2);
    cout<<"list length:"<<list.length<<endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}