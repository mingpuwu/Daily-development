#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
using namespace std;

static int num = 0;
mutex mymutex;
condition_variable cond;
bool status= false;

void thread1(){
    unique_lock<mutex> mylock1(mymutex);
    cout<<"thread1"<<endl;
    status = true;
    cond.notify_all();
}

void thread2(){
    unique_lock<mutex> mylock2(mymutex);
    cout<<"thread2"<<endl;
    while (status != true){
        cond.wait(mylock2);
    }
    cout<<"status is "<<status<<endl;
}



int main() {
    thread th1(thread1);
    thread th2(thread2);
    th2.join();
    th1.join();
    return 0;
}