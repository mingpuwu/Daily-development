//
// Created by Administrator on 2018/12/9.
//
#include <iostream>
#include "base_class.h"
using namespace std;
namespace base{
    base_class::base_class() {
        cout <<"creat base class"<<",now get a instance"<<endl;
    }
    void base_class::my_class_info(){
        cout << "this is base add_class_info_handler"<<endl;
    }
    base_class::~base_class() {

    }
}
