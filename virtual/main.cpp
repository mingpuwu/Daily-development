#include <iostream>
#include "base_class.h"
#include "human_class.h"
using namespace std;
using namespace base;
int main() {
    std::cout << "Hello, World!" << std::endl;
    base_class base;
    human_class human("boy");
    base_class *p = &base;
    human_class *hp = &human;
    p->my_class_info();
    hp->my_class_info();
}