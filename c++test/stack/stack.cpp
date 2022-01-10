#include<stack>
#include<iostream>

int main()
{
    std::stack<int> s;
    s.push(1);
    int a = s.top();
    s.pop();
    printf("a data is %d\n",a);
}