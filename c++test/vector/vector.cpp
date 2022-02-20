#include<vector>
#include<iostream>
#include<string>

using std::vector;
using std::cout;
using std::endl;

int main()
{
    vector<char> data = {'1','2','3'};

    cout<<data.data()<<endl;

    std::string aa("123");

    vector<std::string> vd;
}  