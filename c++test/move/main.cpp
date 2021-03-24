#include <iostream>

class test
{
    public:
        test(int a):aa(a)
        {

        }

        ~test()
        {
            printf("destruct %d\n",aa);
        }

        test(test& )
        {
            printf("copy\n");
        }
        test(test&&)
        {
            printf("move");
        }
        test& operator=(test&)
        {
            printf("= copy\n");
        }

        test&& operator=(test&& arg)
        {
            printf("move\n");
            this->aa = arg.aa;
        }

        int aa;
};

test function()
{
    test testtmp(1);
    return testtmp;
}

int main()
{
    //int& a = 1;//编译错误  左值应用，而1是常量，常量是右值，因此不能引用右值
    const int& b = 1; //常量引用可以
    int c = 10;
    int&& d = std::move(c);
    c = 100;
    printf("c = %d\n",c);
    printf("d = %d\n",d);

    test testinstance(2);
    testinstance = function();
    printf("%d\n",testinstance.aa);
}