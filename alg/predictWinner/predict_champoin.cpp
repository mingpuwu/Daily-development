#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

/*
预测我先手是否可以赢
我和它都足够聪明，会选择全局最优的方案
*/

int process(int array[], int left, int right)
{
    if(left == right)
        return array[left];

    int choseleft = array[left] - process(array,left+1, right);
    int choseright =  array[right] - process(array, left, right-1);

    return max(choseleft, choseright);
}

int main()
{
    int array[] = {1,5,100,2};
    int ret = process(array,0, sizeof(array)/sizeof(int)-1);
    cout<<ret<<endl;
    if(ret >= 0)
    {
        cout<<"我可以赢"<<endl;
    }
    else
        cout<<"我输"<<endl;
}