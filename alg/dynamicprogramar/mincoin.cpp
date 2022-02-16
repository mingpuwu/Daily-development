#include<iostream>
#include<algorithm>
#include<limits.h>

/*求面值为2，5，7的硬币组成一个值，使用的最少硬币数*/

int coin_value[3] = {2,5,7};

int getMinCoin(int coin_value[], int coin_valuenum, int sum)
{
    //细节部分，要申请sum+1的大小
    int array[sum+1] = {0};

    //初始化
    array[0] = 0;

    //开始从1开始计算，array[1] array[2] array[3]
    for(int i = 1; i<= sum; i++)
    {
        array[i] = INT_MAX;

        for(int j = 0; j< coin_valuenum; j++)
        {
            //细节部分，面试的时候会关注这些点
            if( (i>=coin_value[j]) && (array[i-coin_value[j]] != INT_MAX) )
                array[i] = std::min(array[i-coin_value[j]]+1, array[i]);//转移方程
        }
    }

    if(array[sum] == INT_MAX)
        array[sum] = -1;

    // for(int i = 0; i<=sum;i++)
    // {
    //     std::cout<<array[i]<<std::endl;
    // }

    return array[sum];
}

int main()
{
    int num = getMinCoin(coin_value,3,40);
    std::cout<< num << std::endl;
}