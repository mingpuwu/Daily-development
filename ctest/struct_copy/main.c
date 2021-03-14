#include <stdio.h>

char array[10] = {"1234567"};

struct mystruct{
    int num;
    char *p;
};

int main() {
    struct mystruct a;
    struct mystruct b;
    a.num = 1;
    a.p = array;
    b = a;
    printf("%p\n",a.p);
    printf("%p\n",b.p);
    printf("Hello, World!\n");
    return 0;
}