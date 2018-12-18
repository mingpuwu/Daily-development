
#include <stdio.h>
#include <string.h>
#include <iostream>

//unsigned char *pImgData: 输入图像指针
//int WidthIn, int HeightIn:输入图像宽、高
//unsigned char *pImgOut: 旋转后图像指针

using namespace std;

class test {
public:
    char num = 0;

    void print(int &a) {
        cout<<a<<endl;
        cout<<"instance output"<<endl;
    }

    virtual void get_num(){
            cout<<num<<endl;
    }

    test():num(10){};
    ~test(){
        cout<<"destory instance"<<endl;
    };
};

class test_derived_class:test{
public:
    int derived_class = num+1;
    void get_num(){
        cout<<derived_class<<endl;
        cout<<"this is derived class num +1"<<endl;
    }
    test_derived_class(){};
    ~test_derived_class(){
        cout<<"destory derived class"<<endl;
    };

};


void RotateOfRight(unsigned char *pImgData, int WidthIn, int HeightIn, unsigned char *pImgOut)
{
    int i, j;
    int WidthOut  = HeightIn;
    int HeightOut = WidthIn;
    for (i = 0; i < HeightOut; i ++)
    {
        for (j = 0;j < WidthOut; j ++)
        {
            *(pImgOut + i*WidthOut + j) = *(pImgData + (HeightIn - j - 1)*WidthIn + i);
        }
    }
}

void instance_call()
{
    test call_instance;
    int tmp =2;
    call_instance.print(tmp);
}

int main()
{
    int i,j,AIlen,AJlen,temp,Jtemp;
    int tmp =1;
    test testinstance;
    unsigned char A[10]={0,1,2,3,4,5,6,7,8,9};
    unsigned char *p = A;
    unsigned char B[10] ={};
    unsigned char *outp = B;
    RotateOfRight(p,5,2,outp);
    for(i=0;i<=10;i++)
        cout<<(int)outp[i];
    cout<<endl;
    instance_call();
    test_derived_class my_derived_class;
    my_derived_class.get_num();
    testinstance.print(tmp);
}
