#include <iostream>
#include <functional>
using std::placeholders::_1;
using std::placeholders::_2;
void func(int a,int b,int c)
{
    std::cout<<"a is "<<a<<std::endl;
    std::cout<<"b is "<<b<<std::endl;
}

int main()
{
    auto a = std::bind(&func,_2,3,_1);
    a(1,2);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}