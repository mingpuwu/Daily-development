#include <stdio.h>

void *a;
int b = 2;

int main() {
    a = &b;
    printf("%d\n",a);
    printf("%d\n",(*(int *)a));
    printf("Hello, World!\n");
    return 0;
}