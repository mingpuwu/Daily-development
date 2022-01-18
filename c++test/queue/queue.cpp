#include<queue>
#include<iostream>

int main()
{
    std::queue<int> data;
    data.push(1);
    data.push(2);
    data.push(3);

    int a = data.front();
    printf("data is %d\n",a);

    data.pop();
    a = data.front();
    printf("data is %d\n",a);

}