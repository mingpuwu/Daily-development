#include <iostream>
#include <thread>
using namespace std;
int num;

void thread1(){
    cout<<"this is thread1,";
    cout<<"num is "<<num<<endl;
    cout<<"thread1 change num,";
    num++;
    cout<<"change num ="<<num<<endl;
}

void thread2(){
    cout<<"this is thread2,";
    cout<<"num is "<<num<<endl;
    cout<<"thread2 change num,";
    num--;
    cout<<"change num ="<<num<<endl;
}


int main() {
    std::cout << "Hello, World!" << std::endl;
    thread th1(thread1);
    thread th2(thread2);
    th1.join();
    th2.join();
    return 0;
}