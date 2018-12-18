//
// Created by Administrator on 2018/12/8.
//

#include "thread_class.h"

using namespace std;
namespace my_class {

    thread_class::thread_class(int thread_num) {
        std::cout << "creat thread_class instance " << thread_num << std::endl;
        thread_class::thread_num = thread_num;
    }

    void thread_class::thread_handler(int thread_num) {
        int times = 0;
        cout << "thread_class num is : " << thread_num << endl;
        while (1) {
            cout << "thread_class " << thread_num << " run times is : " << times++<<endl;
            sleep(2);
        }
    }

    void thread_class::start(int i) {
        thread thread1(&(thread_class::thread_vector[i]->thread_handler),i);
        thread1.join();
    }
}