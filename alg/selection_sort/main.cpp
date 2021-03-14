#include <iostream>

using  namespace std;

//选择排序与冒泡有点类似，算法复杂度都是N方，选择排序是从开始选择一个数与后面依次比较，
//一趟后可以找打最小的数，之后把该数与选择的第一数互换，选择排序减少了无意义的数据互换

void selectsrot(int* a,int len)
{
    for(int i = 0; i< len -1; i++)
    {
        int min = i;//选择i索引点是最小值

        //把该位置值依次与后面比较
        for(int j = i+1; j < len-1; j++)//一趟后找到了最小值的索引
        {
            if(a[j] < a[min])//找到比最小值还小的值
            {
                min = j;//最小值索引更换
            }
        }

        //两个值互换,注意，这一步一定要在索引全部搜索完后再执行
        int tmp = a[i];
        a[i] = a[min];
        a[min] = tmp;
    }
}

int main() {
    int a[5] = {3,4,2,1,6};
    selectsrot(a,5);
    for(int i =  0;i<5;i++)
    {
        cout<<a[i]<<endl;
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}