//
// Created by mingp on 2018/12/17.
//

#include "manager.h"
#include "student.h"
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

    void manager::set_student_grade(std::string name ,std::string object, int grade) {
        allinfo["name"]["object"] = grade;
        cout<<name<<" "<<object<<" is "<<grade;
    }

    void manager::add_student_info(const class student &info) {
        manager::allinfo.insert({info.name,info.object_grade});
    }
    manager::~manager() {
        cout<<"quit manager"<<endl;
    }
}