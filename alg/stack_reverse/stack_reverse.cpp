/*
不借助其他数据结构逆序栈
递归中套递归
*/

#include<stack>
#include<iostream>

using namespace std;

//返回栈最底的元素
int getStackBottom(stack<int>& s)
{
    int topdata = s.top();
    s.pop();
    if(s.empty())
        return topdata;

    int last = getStackBottom(s);
    s.push(topdata);
    return last;
}

//取出栈底元素在push下去
void Reverse(stack<int>& s)
{
    if(s.empty())
        return;
    
    int getdata = getStackBottom(s);
    Reverse(s);
    s.push(getdata);
}

void foreachstack(stack<int>& s)
{
    while(!s.empty())
    {
        int topdata = s.top();
        cout<<topdata<<endl;
        s.pop();
    }
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    Reverse(s);

    foreachstack(s);
}