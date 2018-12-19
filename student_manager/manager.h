//
// Created by mingp on 2018/12/17.
//
#include "student.h"
#ifndef STUDENT_MANAGER_MANAGER_H
#define STUDENT_MANAGER_MANAGER_H

using namespace std;
using namespace stu;
namespace mg {
    class manager {
    public:
        manager();
        std::map<string,map<string,int>> allinfo;
        void access_manager();
        int input_account_password(std::string,std::string);
        void set_student_grade(std::string,std::string,int);
        void add_student_info(const class student &);

        ~manager();

    private:
        std::map<std::string,std::string> acount;
    };
}


#endif //STUDENT_MANAGER_MANAGER_H
