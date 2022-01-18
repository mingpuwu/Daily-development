#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char p[] = "this is haha,wumingpu and you !";

    char* pos = strstr(p,"ha");
    printf("%s\n",pos);
}