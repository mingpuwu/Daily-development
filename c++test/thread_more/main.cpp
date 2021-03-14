#include <iostream>
#include "thread_class.h"
using namespace std;
using namespace my_class;

int main() {
    std::cout << "Hello, World!" << std::endl;
    thread_class::get_thread_instance(1);
    thread_class::thread_vector[1]->start(1);
    return 0;
}