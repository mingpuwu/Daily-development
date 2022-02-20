#include<vector>
#include<iostream>
#include<string>

using std::vector;
using std::cout;
using std::endl;

int main()
{
    int a[10][3];
    int line = sizeof(a)/sizeof(a[0]);
    cout<<line<<endl;
}