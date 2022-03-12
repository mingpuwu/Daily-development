#include<iostream>
#include<string>

using namespace std;

int sum = 0;

bool isValid(int array[], int row, int line)
{
    for(int i = 0; i < row; i++)
    {
        if(array[i] == line or abs(line-array[i]) == abs(row-i))
            return false;
    }

    return true;
}

int process(int array[], int size, int i)
{
    if(i == size)
    {
        sum++;
        //比较容易理解是用一个全局变量去统计，

        //也可以用res的方式，以后遇到要统计有多少种方法的时候可以采用这个方式
        return 1;//res时使用返回1
    }

    int res = 0;
    for(int j = 0; j < size; j++)
    {
        if(isValid(array,i,j))
        {
            array[i] = j;
            res += process(array, size, i+1);
        }
    }

    return res;
}

int main()
{
    int array[8] ={};
    int res = process(array,8,0);
    cout<<sum<<endl;
    cout<<res<<endl;
}