
#include <iostream>
#include <cstring>

using namespace std;

class P
{
public:
    virtual void func()
    {
        cout << "class P Base Function" << endl;
    }
};

class B : public P
{
public:
    /***
        virtual void func()
        {
            cout << "class B Base Function" << endl;
        }
    ***/
    void func(int x)
    {
        cout << "class B Derive Function" << endl;
    }
};

int main()
{
    B b;
    //b.func();

    P *ptr = &b;
    ptr->func();
    ptr->func(1);

    return 0;
}