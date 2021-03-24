//
// Created by Administrator on 2018/12/8.
//
#include <thread>
#include <iostream>
#include <unistd.h>
#include <mutex>
#include <vector>
#ifndef THREAD_THREAD_H
#define THREAD_THREAD_H
namespace my_class {

    class thread_class
    {
    public:
        int thread_num = 0 ;
        ~thread_class();
        static std::vector<thread_class *> thread_vector;
        static void thread_handler(int);

        static void get_thread_instance(int i)
        {
            thread_class * p=NULL;
            p = new thread_class(i);
            thread_vector.push_back(p);

        }
        void start(int);
        void stop(int);
    private:
        thread_class(int);
        //static thread_class * instance_point;
    };

#endif //THREAD_THREAD_H
}