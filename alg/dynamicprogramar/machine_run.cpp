#include<iostream>
#include<algorithm>
#include<limits.h>

/*
| start |     |     |     |
--------------------------
|       |     |     |     |
--------------------------
|       |     |     | end |
机器人从start走到end有多少种方法

最后一步：end处，end处的上一步是end的上方或者左方，那么f[end] = f[up]+f[left]

子问题：求上一步的走法数量

转移方程：
f[row][cloum] = f[row][cloum-1] + f[row-1][cloum]

初始条件：
row或者cloum为0的点方法数为1，因为只能向下或向右走

顺序：一行一行来，挨次把所有的行走完

*/

int machine_run(int row, int cloum)
{
    int array[row][cloum] = {0};

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < cloum ; j++)
        {
            if(i== 0 || j == 0)
            {
                array[i][j] = 1;
            }
            else
            {
                array[i][j] = array[i-1][j]+ array[i][j-1];
            }
        }
    }

    return array[row-1][cloum-1];
}

int main()
{
    int stepwaynum = machine_run(2,3);
    std::cout<< stepwaynum<< std::endl;
}