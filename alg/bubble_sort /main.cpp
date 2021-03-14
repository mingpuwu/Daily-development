#include <iostream>

using namespace std;

void display(int* a, int len)
{
    for(int i =0; i< len; i++)
    {
        cout<<a[i]<<endl;
    }
}

void bubble_sort(int* array, int len)
{
    for(int j = 0; j < len-1; j++)//排len趟
    {
        for(int i = 0; i < len-j-1; i++)//排一趟，找出最大的排到最后
        {
            if(array[i] > array[i+1])
            {
                int tmp = array[i+1];
                array[i+1] = array[i];
                array[i] = tmp;
            }
        }
    }
}

int main()
{
    int a[5] = {3,9,2,7,1};
    bubble_sort(a,5);

    display(a,5);
}