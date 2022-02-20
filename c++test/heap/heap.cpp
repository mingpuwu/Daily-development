#include<algorithm>
#include<vector>
#include<iostream>


bool MaxFunction(int a, int b)
{
    return a>=b;
}

int main()
{
    std::vector<int> a={1,3,4,6,9,0};
    std::make_heap(a.begin(),a.end(),MaxFunction);

    for(auto i: a)
    {
        std::cout<<i<<std::endl;
    }
}