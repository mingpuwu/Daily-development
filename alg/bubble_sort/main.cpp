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
    for(int j = 0; j < len-1; j++)//排len趟
    {
        for(int i = 0; i < len-j-1; i++)//排一趟，找出最大的排到最后
        {
            if(array[i] > array[i+1])
            {
                swap(array,i,i+1);
            }
        }
    }
}

int main()
{
    int a[] = {3,9,2,7,1,4,5};
    int size = sizeof(a)/sizeof(int);
    bubble_sort(a,size);

    display(a,size);
}