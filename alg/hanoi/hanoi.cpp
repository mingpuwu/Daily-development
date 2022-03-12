#include<iostream>
#include<string.h>

/*
汉诺塔问题，
代码就是递归
*/

using namespace std;

//把前1到i放置到指定的柱子
//最上面是1，最下面是i
void process(int i, string from, string to, string other)
{
    if(i == 1)
    {
        cout<<i<<" "<<from<<" move "<<to<<endl;
    }
    else{
        process(i-1, from, other, to);
        cout<<i<<" "<<from<<" move "<<to<<endl;
        process(i-1, other, to, from);
    }
}

void Hanoi(int n)
{
    process(n,"left", "mid", "right");
}

int main()
{
    Hanoi(5);
}