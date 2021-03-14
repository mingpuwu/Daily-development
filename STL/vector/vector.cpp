#include <iostream>
using namespace std;

template <class T>
class Vector
{
public:
    //    构造函数
    Vector(int size=0):theSize(size),theCapacity(size+SPACE_CAPACITY)
    {
        data = new T[theCapacity];
        cout<<"construct "<<endl;
    }

    //    复制构造函数,直接调用赋值运算符
    Vector(const Vector& other) :theSize(0),theCapacity(0),data(NULL)
    {
        cout<<"copy construct"<<endl;
        *this=other;
    }

    //    重载赋值函数，由于是深拷贝，需要把自己的内存删除掉，参数的数据拷贝一份
    Vector& operator=(const Vector& other)
    {
        cout<<"copy ="<<endl;
        //    判断是否为自身赋值
        if (this == &other)
            return *this;
        else
        {
            delete[] data;
            theSize = other.theSize;
            theCapacity = other.theCapacity;
            data = new T[theCapacity];

            for (int i = 0; i < theSize; ++i)
            {
                data[i] = other.data[i];
            }
            return *this;
        }
    }

    //    析构函数
    ~Vector(void)
    {
        delete[] data;
    }
    //    重新分配空间大小函数
    void reServe(int newCapacity)
    {
        if (newCapacity <= theCapacity)
            return;

        T *temp = data;
        data = new T[newCapacity];
        for (int i = 0; i < theSize; ++i)
            data[i] = temp[i];
        delete[] temp;
    }
    //    push_back函数
    void push_back(T val)
    {
        if (theSize == theCapacity)
            reServe(2 * theCapacity + 1);
        data[theSize++] = val;
    }
private:
    const int SPACE_CAPACITY = 16;
    int theCapacity;
    int theSize;
    T *data;
};

int main()
{
    Vector<int> mytest(1);

    Vector<int> mytest2 = mytest;
}