#include <iostream>
using namespace std;
int main() {
    int a=0;
    while(a<10){
        a++;
    }
    cout<<a<<endl;
    a = 0;
    while(a<10){
        ++a;
    }
    a =0;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    for(a;a<=10;a++)
        cout<<a<<endl;
    cout<<a<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    a = 0;
    for(a;a<=10;++a)
        cout<<a<<endl;
    cout<<a<<endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}