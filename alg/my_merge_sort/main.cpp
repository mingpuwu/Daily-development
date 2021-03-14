#include <iostream>
using namespace std;

//归并排序

void merg(int a[],int start,int mid,int end)
{
    int *tmp = (int*)malloc((end-start+1)*sizeof(int));
    int i=start;
    int j = mid+1;
    int k=0;
    while(i<=mid&&j<=end)
    {
        if(a[i]<=a[j])
            tmp[k++] = a[i++];
        else
            tmp[k++] = a[j++];
    }

    while(i<=mid)
        tmp[k++]=a[i++];
    while(j<=end)
        tmp[k++] = a[j++];

    for(int i=0;i<k;i++)
        a[start+i] = tmp[i];
    free(tmp);
}

void msort(int a[],int start,int end)
{
    if(start >= end)
        return;

    int mid = (start+end)/2;
    msort(a,start,mid);
    msort(a,mid+1,end);

    merg(a,start,mid,end);
}

int main()
{
    int a[10] = {9,8,7,6,5,4,3,2,1,0};
    msort(a,0,9);

    for(int i= 0;i<9;i++)
        std::cout<<a[i]<<std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}