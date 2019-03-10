#include <iostream>
#include <functional>
using std::placeholders::_1;
void func(int a,int b)
{
    std::cout<<"a is "<<a<<std::endl;
    std::cout<<"b is "<<b<<std::endl;
}

int main() {
    auto a = std::bind(&func,3,_1);
    a(1);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}