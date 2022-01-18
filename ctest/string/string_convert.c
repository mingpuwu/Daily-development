#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char p[] = "0xaa 0xab 0xac";
    char p1[] = "1";
    char p2[] = "a";

    printf("%d\n",(int)atof(p));

    char* end;
    int a = strtol(p,&end,16);
    printf("%d\n",a);

    a = strtol(end,&end,16);
    printf("%d\n",a);

    a = strtol(end,&end,16);
    printf("%d\n",a);
}