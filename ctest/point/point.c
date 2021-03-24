#include<stdio.h>
#include <stdlib.h>

void getmemory(int *a)
{
    printf("%p\n",a);
    a = malloc(sizeof(int));
    a = 10;
}

int main()
{
    int a = 0;
    getmemory(&a);
}