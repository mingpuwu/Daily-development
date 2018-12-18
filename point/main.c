#include <stdio.h>

int main()
{
    int a[5]={1,2,3,4,5};
    printf("%d\n", sizeof(int));
    printf("%p\n",a);
    printf("%p\n",&a[1]);
    printf("%p\n",&(a+1));
    printf("%x\n",&a+1);
    int *ptr=(int *)(&a+1);
    printf("%d,%d",*(a+1),*(ptr-1));
    return 0;
}