#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char p[] = "this is haha,wumingpu and you !";
    char split[] = " ,";
    char *token = strtok(p, split);
    while(token) {
        puts(token);
        token = strtok(NULL, split);
    }

    char p1[] = "this is haha,wumingpu and you !";
    char *tmp;
    token = strtok_r(p1, split, &tmp);
    while(token)
    {
        puts(token);
        token = strtok_r(NULL, split, &tmp);
    }


    //this
    //is
    //haha
    //wumingpu
    //and
    //you
    //!   
}