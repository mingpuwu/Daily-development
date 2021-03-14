//
// Created by Administrator on 2018/12/9.
//
#include "base_class.h"
#include <string>
#ifndef VIRTUAL_HUAMN_CLASS_H
#define VIRTUAL_HUAMN_CLASS_H

using namespace base;
using namespace std;
class human_class :base_class{
public:
    string name;

    human_class(string);

    ~human_class();

    void my_class_info();
};


#endif //VIRTUAL_HUAMN_CLASS_H
