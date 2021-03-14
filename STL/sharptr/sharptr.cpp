#include <iostream>
#include <memory>
#include <initializer_list>

using namespace std;

template <class T>
class myautoptr
{
public:
    myautoptr(T *p):ptr(p),count(new (int))
    {
        ++(*count);
        cout<<"construct"<<endl;
    }

    ~myautoptr()
    {
        cout<<"destruct"<<endl;
        --*count;
        if(*count == 0)
        {
            cout<<"al destruct"<<endl;
            delete ptr;
            delete count;
        }
    }

    //拷贝构造函数是把别人的值拷贝给自己
    myautoptr(const myautoptr<T> &a):ptr(a.ptr),count(a.count)
    {
        cout<<"copy construct"<<endl;
        ++(*count);
    }

    //拷贝赋值运算符是把自己的内容先释放析构掉，在把别人的值给自己
    myautoptr<T>& operator=(const myautoptr<T> &a)
    {
        cout<<"copy ="<<endl;
        if(&a != this)
        {
            --(*count);
            if(*count == 0)
            {
                delete ptr;
                delete count;
                cout<<"destruct self"<<endl;
            }

            ptr = a.ptr;
            count = a.count;
            ++(*count);
        }
    }

    T& operator*()
    {
        return *ptr;
    }

private:
    T *ptr;
    int *count;
};

int main()
{
    int *a = (int*)malloc(4);
    myautoptr<int> test(a);

    myautoptr<int> test1 = test;

    int *b = (int*)malloc(4);
    myautoptr<int> test2(b);
    test2 = test;

    return 0;
}