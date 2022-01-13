#include<vector>
#include<iostream>

using std::vector;
using std::cout;
using std::endl;

int main()
{
    vector<char> data = {'1','2','3'};

    cout<<data.data()<<endl;
}