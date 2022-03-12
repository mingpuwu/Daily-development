//堆通常是一个可以被看做一棵完全二叉树的数组对象
//heapify就是把一个数组排列成堆形式

//节点公式
/*
左子节点 = 父节点*2+1
右子节点 = 父节点*2+2
父节点 = i-1/2
*/
#include<algorithm>
#include<iostream>
#include<vector>

void swap(int array[], int x, int y)
{
    int tmp = array[x];
    array[x] = array[y];
    array[y] = tmp;
}

//这个是从上向下heapify
void heapify(int array[], int n, int i)
{
    if(i >= n)
        return;

    int c1 = i*2+1;
    int c2 = i*2+2;

    //三个数比大小。这个地方很巧妙
    int max = i;//假设i最大

    if(c1 < n && array[c1] > array[max]){
        max = c1;
    }

    if(c2 < n && array[c2] > array[max]){
        max = c2;
    }

    if(max != i)
    {
        swap(array, max, i);
        heapify(array, n, max);//为什么输入参数为max,因为刚才把max节点和i节点交换了位置
        //这样会导致之前以max为父节点的子树堆混乱，所有需要重新堆化
    }
}

//从下往上heapify
void BuildHeapify(int array[], int n)
{
    int lastnode = n-1;//获取最后一个节点
    int parent = (lastnode-1)/2;//获取最后一个节点的父节点
    for(int i = parent; i >= 0; i--)
    {
        heapify(array, n, i);
    }
}

//1.把最后一个节点与第一个节点交换(第一个节点是最大或最小值)，最后一个节点拿走，
//2.进行heapify，循环1，2
void HeapifySort(int array[], int n)
{
    std::vector<int> sortarray;
    for(int i = n-1; i>= 0; i--)
    {
        swap(array,0, i);
        sortarray.push_back(array[i]);
        BuildHeapify(array,i);
    }

    for(auto i: sortarray){
        std::cout<<i<<std::endl;
    }
}

int main()
{
    int array[] = {2,1,5,3,4,8,6};
    BuildHeapify(array,sizeof(array)/sizeof(int));

    for(int i = 0; i < sizeof(array)/sizeof(int); i++)
    {
        std::cout<<array[i]<<std::endl;
    }

    std::cout<<"----------------------------"<<std::endl;

    HeapifySort(array,sizeof(array)/sizeof(int));
}