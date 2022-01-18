#include<stdio.h>
#include<iostream>

//随机数去重排序

int main()
{
    int num;
    while(std::cin>>num)
    {
        int tmp = 0;
        int array[1001] = {0};
        while(num>0)
        {
            num--;
            std::cin>>tmp;
            array[tmp] = 1;
        }

        for(int i =0 ;i < 1001; i++)
        {
            if(array[i] == 1)
                std::cout<<i<<std::endl;
        }
    }
}