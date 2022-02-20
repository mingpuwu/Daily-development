#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

/*
切金条，一块金条切两半，需要要花费和长度数值一样的钱，
一群人想分整块金条，怎么分花费最少
比如
[10,20,30]，总长度为60，分成三部分，先切30，再对30切10，20，总共花费90，最省钱
*/

using std::vector;
bool MaxsortFunction(int a, int b)
{
    return a > b;
}

int SplitGold(vector<int>& data, int num)
{
    std::make_heap(data.begin(), data.end(),MaxsortFunction);
}

int main()
{

}