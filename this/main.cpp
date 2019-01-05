#include <iostream>
using namespace std;
class myclass{
public:
    int num;
    myclass();
    void func(int);
};

myclass::myclass(){
    num = 10;
}

void myclass::func(int x){
    num=x;
}

int main() {
    myclass instance;
    cout<<instance.num<<endl;
    instance.func(1);
    cout<<instance.num<<endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}