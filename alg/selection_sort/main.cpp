#include <iostream>

using  namespace std;

//选择排序与冒泡有点类似，算法复杂度都是N方，选择排序是从开始选择一个数与后面依次比较，
//一趟后找出最小的数，之后把该数与选择的第一个数互换，选择排序减少了无意义的数据互换
//选择排序是一种不稳定的排序算法,比如5,8,5,2,9这样一组数据，使用选择排序算法来排序的话，
//第一次找到最小元素2，与第一个5交换位置，那第一个5和中间的5顺序就变了，所以就不稳定了

void swap(int a[], int i, int j)
{
    int tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
}

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
        swap(a, i, min);
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