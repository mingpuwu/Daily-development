#include <iostream>
using namespace std;

//二分查找，平均查找长度 log2(n+1) -1

int binary(int p[],int a)
{
    int low=0;
    int high= 9;
    int mid;
    while(low<high)
    {
        mid = (high+low)/2;//找到中间值
        if(a<p[mid])
        {
            high = mid+1;
        }
        else if(a>p[mid])
        {
            low = mid-1;
        }
        else
            return mid;
    }

    return 0;
}

int main()
{
    int array[10] = {0,1,2,3,4,5,6,7,8,9};
    std::cout<<binary(array,1)<<std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}