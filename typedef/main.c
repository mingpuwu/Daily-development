#include <stdio.h>

typedef int myint;
typedef char* pchar;
struct body{
    myint age;
    pchar name;
};

struct test{
    int a;
    char b;
}mytest;

typedef struct body bodyinstance;
typedef struct body *bodyinstancepoint;
typedef int (*fp)(int, char*);
int main() {
    pchar f;
    //int (*fp)(int, char*);
    int func(int i,pchar a){
        i  =1 ;
        printf("str is %s",a);
        return 0;
    }

    bodyinstance ming;
    mytest.b = 1;
    bodyinstancepoint mingpoint = NULL;
    printf("Hello, World!\n");
    char a[] = {"asd"};
    char b[] ={"123"};
    myint i = 1;
    fp more = &func;
    more(1,b);
    ming.name = a;
    mingpoint->age= 19;
    mingpoint->name = a;
    ming.age =18;
    pchar str = a;
    printf("%s\n",str);
    printf("%d",i);
    return 0;
}