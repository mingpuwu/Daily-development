//
// Created by Administrator on 2018/12/9.
//

#include "human_class.h"
#include <iostream>

using namespace std;
using namespace base;

human_class::human_class(string a) {
    human_class::name = a;
    cout<<"this is human class ,and the human class has created"<<endl;
}

void human_class::my_class_info() {
    cout <<"this is huaman class info "<< ",this handler is runing create "<<human_class::name<<endl;
}

human_class::~human_class() {

}