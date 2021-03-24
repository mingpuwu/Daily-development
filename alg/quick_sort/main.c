#include <stdio.h>
#include <stdlib.h>

void display(int* array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

//快排在冒泡排序改机而来，
//基本思想是分治思想，递归分块排序，平均O(nlogn)
//1.已第一个数为基准，已基准为分解线开始成两部分
//2.递归

//一趟排序
int getStandard(int array[], int i, int j)
{
    // 基准数据
    int key = array[i];

    //i是左边索引  j是右边索引
    while (i < j)
    {
        // 因为默认基准是从左边开始，所以从右边开始比较
        while (i < j && array[j] >= key)
        {
            j--;
        }
        // 当找到比基准小的值，就把后面的值 array[j] 赋给它，i处的值已经被拿走
        if (i < j)
        {
            array[i] = array[j];//把小的放低端
        }

        // 再从左开始找,就一直向后挪动 i 指针
        while (i < j && array[i] <= key) {
            i++;
        }
        // 当找到比基准大的值时，就把前面的值 array[i] 赋给它，把j处的值补上
        if (i < j) {
            array[j] = array[i];
        }
    }
    // 跳出循环时 i 和 j 相等（并不意味着一定对半分）,此时的 i 或 j 就是 key 的正确索引位置
    // 把基准数据赋给正确位置
    array[i] = key;
    return i;
}

void QuickSort(int array[], int low, int high)
{
    // 开始默认基准为 low
    if (low < high)
    {
        // 分段位置下标
        int standard = getStandard(array, low, high);
        // 递归调用排序
        // 左边排序
        QuickSort(array, low, standard - 1);
        // 右边排序
        QuickSort(array, standard + 1, high);
    }
}

int main()
{
    int array[] = {49, 38, 65, 97, 76, 13, 27, 49, 10};
    int size    = sizeof(array) / sizeof(int);

    QuickSort(array, 0, size - 1);
    display(array, size);

    return 0;
}