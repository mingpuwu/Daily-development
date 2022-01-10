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

void swap(int a[], int i, int j)
{
    int tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
}

//快排在冒泡排序改机而来，
//基本思想是分治思想，递归分块排序，平均O(nlogn)
//1.已第一个数为基准，已基准为分解线开始成两部分
//2.递归

//一趟排序
int getStandard(int array[], int left, int right)
{
    // 基准数据
    int key = array[left];

    //left是左边索引  right是右边索引
    while (left < right)
    {
        // 因为默认基准是从左边开始，所以从右边开始比较
        while (left < right && array[right] >= key) right--;
        // 当找到比基准小的值，就把后面的值 array[right] 赋给它，left处的值已经被拿走
        swap(array,left,right);

        // 再从左开始找,就一直向后挪动 left 指针
        while (left < right && array[left] <= key) left++;

        // 当找到比基准大的值时，就把前面的值 array[left] 赋给它，把right处的值补上
        swap(array,left,right);
    }
    // 跳出循环时 left 和 right 相等（并不意味着一定对半分）,此时的 left 或 right 就是 key 的正确索引位置
    // 把基准数据赋给正确位置
    array[left] = key;
    return left;
}

void QuickSort(int array[], int left, int right)
{
    // 开始默认基准为 left
    if (left < right)
    {
        // 分段位置下标
        int standard = getStandard(array, left, right);
        // 递归调用排序
        // 左边排序
        QuickSort(array, left, standard - 1);
        // 右边排序
        QuickSort(array, standard + 1, right);
    }
}

int main()
{
    int array[] = {1, 1, 49, 38, 65, 97, 76, 13, 27, 49, 10};
    int size    = sizeof(array) / sizeof(int);

    QuickSort(array, 0, size - 1);
    display(array, size);

    return 0;
}