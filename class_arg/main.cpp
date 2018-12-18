#include<iostream>
#include<thread>
#include<mutex>

std::mutex mut;

class A{

public:

    volatile int temp;

    A(){
        temp=0;
    }

    void fun(int num){

        int count=10;
        while(count>0){

            mut.lock();
            temp++;
            std::cout<<"thread_"<<num<<"...temp="<<temp<<std::endl;
            mut.unlock();

            count--;
        }
    }

    void thread_run(){
        std::thread t1(&A::fun,this,1);

        std::thread t2(&A::fun,this,2);

        t1.join();
        t2.join();
    }
};

int main(){

    A a;

    a.thread_run();
}