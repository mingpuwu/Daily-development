#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char p[] = "11.11- 22.22 inf";

    char* end;
    double d = strtod(p,&end);

    printf("%f , %s\n",d,end);
}