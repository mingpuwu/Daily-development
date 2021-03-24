#include<iostream>

class test
{
    public:
        test(int a):arg(a)
        {

        }

        void handler()
        {
            std::cout<<"name test %d"<<arg<<std::endl;
        }
        int arg = 0;
};

void call_class(int a)
{
    test testinstance(a);
    testinstance.handler();
}