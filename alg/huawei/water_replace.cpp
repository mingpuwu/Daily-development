#include<stdio.h>
#include<iostream>

//置换汽水瓶

int main()
{
    int num;
    while(std::cin>>num)
    {
        if(num == 0) break;
        int count = 0;
        while(num>2)
        {
            count += num/3;
            num = num%3+num/3;
        }

        if(num == 2) count+=1;

        std::cout<<count<<std::endl;
    }

}