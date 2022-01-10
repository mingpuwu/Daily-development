#include <iostream>

using namespace std;

//插入排序，算法时间复杂度n方，空间复杂度
//将无序的元素插入到有序的元素序列中，插入后仍然有序。
//插入排序：每次把前面的一部分数据排好(从两个数开始)，逐次扩大规模，将后面扩大的数据
//包含进来，插如到前面排好的数据中去，直至整个数组

void display(int* x)
{
    for(int i = 0; i < 6; i++)
    {
        cout<<x[i];
    }
    cout<<endl;
}

void insertion_sort(int unsorted[], int len)
{
    for (int i = 1; i < len; i++)//从第二个数开始
    {
        if (unsorted[i - 1] > unsorted[i])//两两比较相邻两个数
        {
            int temp = unsorted[i];//小的数记下来,此时i位置处的数可以随意更改
            int j = i;//小的索引备份

            //往前接着比，找到比刚才大的数
            while (j > 0 && unsorted[j - 1] > temp)
            {
                unsorted[j] = unsorted[j - 1];//依次往后移，最后位置的数记在temp那，不用担心丢失
                j--;
            }
            unsorted[j] = temp;//找到了比temp小的值，将刚才保存的值放入
            display(unsorted);
        }
    }
}

int main()
{
    int x[6] = {6, 2, 4, 3, 5, 1};
    insertion_sort(x,6);

    for(int i = 0; i < 6; i++)
    {
        cout<<x[i]<<endl;
    }
}