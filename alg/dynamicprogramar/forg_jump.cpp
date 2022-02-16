#include<iostream>
#include<algorithm>
#include<limits.h>

/*
青蛙跳
有n块石头分别在x轴的0，1，....n-1位置
一只青蛙在石头0，想跳到n-1位置处
如果青蛙在第i块石头上，他最多可以向右跳ai的距离
问青蛙能否跳到石头n-1上面
*/

/*
输入例子
在0处最多可以跳2个，在2处最多可以跳3个，在3处最多可以跳1个.....
a=[2,3,1,1,4]
True
a=[3,2,1,0,4]
False
*/

/*
最后位置：跳到n-1处，需要满足的条件：
（1）可以跳到上一次位置i
（2）可以从i跳到n-1,需要符合n-1-i<a[i]

子问题:能不能跳到i(i<n-1)

状态转移方程：f[j] = OR{0<=i<j}(f[i] and i + a[i] >= j)
*/

bool jump_game(int a[], int anum)
{
    bool array[anum] = {0};

    array[0] = true;

    //f[1]....f[n-1]能不能跳到
    for(int i = 1; i < anum; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(array[j] && i-j <= a[j])
            {
                array[i] = true;
                break;
            }
            else
            {
                array[i] = false;
            }
        }
    }

    return array[anum-1];
}

int main()
{
    int list[5] = {1,2,0,0,5};
    bool status = jump_game(list,5);
    std::cout<< status<<std::endl;
}