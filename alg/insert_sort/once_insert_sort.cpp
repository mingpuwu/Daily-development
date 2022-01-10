#include <iostream>

using namespace std;

int main()
{
    int a[4] = {4,5,6,1};
    int j = 3;//把最后一个数往前面合适的位置插
    int tmp = a[3];//a[3]中的值是要往前插的

    //比他小的数往后面移动，找到后插入
    while (j > 0 && a[j-1] > tmp)
    {
        a[j] = a[j-1];//往后移
        j--;
    }

    a[j] = tmp;//把该数插入空隙

    for(int i = 0; i < 4; i++)
    {
        cout<<a[i]<<endl;
    }
}