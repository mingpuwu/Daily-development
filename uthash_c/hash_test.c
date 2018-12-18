#include <stdio.h>
#include "uthash.h"
#include <string.h>



typedef struct mytest{
    int mykey;
    char a[10] ;
    UT_hash_handle hh;  
}mytest;


char name[10] = {"2123231"}; 

mytest *test_hash_head = NULL;


void add_user(int mykey){
    mytest *s = malloc(sizeof(mytest));
    s->mykey = mykey;
    strcpy(s->a,name);
    HASH_ADD_INT(test_hash_head,mykey,s);
}

mytest *find_user(int mykey) {
    mytest *s;
    HASH_FIND_INT(test_hash_head, &mykey, s );
    return s;
}

void print_users() {
    struct mytest *s;

    for(s=test_hash_head; s != NULL; s=(mytest*)(s->hh.next)) {
        printf("user id %d: name %s\n", s->mykey, s->a);
    }
}


int main()
{
    int i,j;
    j  =2;
    mytest *node;
    for(i=1;i<6;i++)
    {
        add_user(i);
        printf("add user to hash\n");
    }
    printf("hash count %d\n",HASH_COUNT(test_hash_head));
    print_users();
    node = find_user(j);
    if(node != NULL){
       printf("find data is %d , node data is %s\n",node->mykey,node->a);
       
    }
    return 0;   
}