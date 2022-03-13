#include <iostream>
#include <deque>
#include <vector>

using namespace std;

vector<int> SlidWindow(vector<int> array, int wwidth)
{
    deque<int> qindex;
    vector<int> res;
    int L = 0;

    for(int R = 0; R < array.size(); R++)//右边界一直在往右扩
    {
        while(!qindex.empty() and array[qindex.back()] < array[R])
            qindex.pop_back();

        qindex.push_back(R);

        if(R >= wwidth)//当前面4个包括进去后可以开始移动左边的
        {
            L++;
            if(L > qindex.front())
                qindex.pop_front();
        }

        if(R>=wwidth-1)//第一个到第三个依次进去的时候不用计算到结果中
            res.push_back(array[qindex.front()]);
    }

    return res;
}

int main()
{
    vector<int> array = {6,5,4,3,2,1,8};
    vector<int> v = SlidWindow(array,3);
    
    for(auto i : v)
    {
        cout<<i<<endl;
    }
}