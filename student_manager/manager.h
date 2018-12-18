//
// Created by mingp on 2018/12/17.
//
#include "student.h"
#ifndef STUDENT_MANAGER_MANAGER_H
#define STUDENT_MANAGER_MANAGER_H


namespace mg {
    class manager {
    public:
        manager();
        void access_manager();
        int input_account_password(std::string,std::string);
        void set_student_grade(std::string,std::string, int);
        int get_student_grade(std::string);
        student_class::student get_all_student_info();
        ~manager();

    private:
        static std::map<std::string,std::string> acount;
    };
}


#endif //STUDENT_MANAGER_MANAGER_H
