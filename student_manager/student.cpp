//
// Created by mingp on 2018/12/17.
//

#include "student.h"
namespace student_class{
    student::student(std::string name) {
        std::cout<<"creat "<<name<<" instance";
        student::name = name;
        student::object_grade ={{"math",0},
                                {"english",0},
                                {"physical",0}
                                };
    }

    int student::look_object_grade(std::string object) {
        return student::object_grade[object];
    }

    void student::add_object(std::string object, int grade) {
        std::cout<<" add "<< object <<"  grade is "<<grade << std::endl;
        student::object_grade.insert({object,grade});
    }

    int student::calcu_average_grade() {
        auto itr = student::object_grade.begin();
        for (itr;itr!=student::object_grade.end() ;itr++) {
            itr->second +=itr->second;
        }
        int average = itr->second/student::object_grade.size();
        return average;
    }

    void student::set_grade(std::string object, int grade) {
        student::object_grade[object] = grade;
    }

    student::~student() {
        std::cout<<"destory "<<student::name<<" info"<<std::endl;
    }
}