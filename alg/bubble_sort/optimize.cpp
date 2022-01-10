#include <iostream>

//比较相邻元素,一趟之后把最大的放到最后

using namespace std;

void display(int* a, int len)
{
    for(int i =0; i< len; i++)
    {
        cout<<a[i]<<endl;
    }
}

void swap(int a[], int i, int j)
{
    int tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
}

void bubble_sort(int array[], int len)
{
    if(len<=1) return;

    for(int j = 0; j < len-1; j++)//排len趟
    {
        bool flag = false;//如果这一趟没有数据交换，说明都已经排好了，可以提前结束
        for(int i = 0; i < len-j-1; i++)//排一趟，找出最大的排到最后
        {
            if(array[i] > array[i+1])//这个地方保证了算法的稳定性，因为只有不等额的时候才交换
            {
                swap(array,i,i+1);
                flag = true;
            }
        }
        if (!flag) break;
    }
}

int main()
{
    int a[] = {3,9,2,7,1,4,5};
    int size = sizeof(a)/sizeof(int);
    bubble_sort(a,size);

    display(a,size);
}