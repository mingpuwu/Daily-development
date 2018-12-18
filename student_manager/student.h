//
// Created by mingp on 2018/12/17.
//
#include <iostream>
#include <vector>
#include <map>
#ifndef STUDENT_MANAGER_STUDENT_H
#define STUDENT_MANAGER_STUDENT_H

namespace student_class {
    class student {
    public:
        std::string name ;
        std::map<std::string,int> object_grade;

        void add_object(std::string, int);

        int look_object_grade(std::string);

        void set_grade(std::string, int);
        std::map<std::string,int> get_student_object();

        int calcu_average_grade();

        student(std::string);
        ~student();
    };

}
#endif //STUDENT_MANAGER_STUDENT_H
