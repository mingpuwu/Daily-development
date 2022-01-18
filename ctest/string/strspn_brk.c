#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char p[] = "this is haha,wumingpu and you !";
    char split[] = " ,!";
    int count = 0;
    char *head = p;
    do
    {
        head = strpbrk(head,split);//找到p中包含split中的分割符，返回找到的第一个分割符的指针
        int pos = strspn(head,split);//跳过该分割符，返回跳过的索引
        head+=pos;
        count++;
    } while (head && *head);
    printf("have %d words\n",count);
    //统计单词数

    int pos1 = strcspn(p,"this");
    printf("%d\n",pos1);
}