#include<stdio.h>
#include<iostream>
#include<string>
#include<string.h>
#include<stdlib.h>

//随机数去重排序
using namespace std;

int main()
{
    string data;
    while(std::cin>>data)
    {
        int num = 0;
        cout<<data<<endl;
        char* end = NULL;
        num = strtol(data.c_str(),&end, 0);
        cout<<num<<endl;

    }
}