#include<string>
#include<iostream>

using namespace std;

int main()
{
    string data("myname");
    for(auto i : data)
    {
        cout<<i<<endl;
    }
}