//
// Created by mingp on 2018/12/17.
//

#include "manager.h"
using namespace std;
namespace mg{
    manager::manager(){
        manager::acount = {{"mingpuwu","asd.1234"}};
    }
    void manager::access_manager() {
        std::cout<<"welcome student manager"<<std::endl;
    }
    int manager::input_account_password(std::string account, std::string password) {
        cout<<"please input your account and password"<<endl;
        string a = manager::acount[account];
        if(a == password)
            return 1;
        else
            return -1;
    }

    void manager::set_student_grade(std::string name, std::string object, int grade) {

    }

    int manager::get_student_grade(std::string object) {

    }

    student_class::student manager::get_all_student_info() {

    }
    manager::~manager() {
        cout<<"quit manager"<<endl;
    }
}