//
// Created by mingp on 2018/12/17.
//
#include <sstream>
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

    int manager::input_account_password() {
        std::string account;
        std::string password;
        string line;
        cout<<"please input account : ";
        while (getline(cin,line)){
            istringstream record1(line);
            record1 >> account;
            break;
        }
        line.clear();
        cout<<"please input password : ";
        while (getline(cin,line)){
            istringstream record2(line);
            record2 >> password;
            break;
        }
        string a = manager::acount[account];
        if(a == password)
            return 1;
        else
            return -1;
    }

    void manager::show_manager_selction() {
        cout<<"1.set student grade"<<"  2.add student info"<<endl;
    }

    void manager::set_student_grade(std::string name ,std::string object, int grade) {
        allinfo["name"]["object"] = grade;
        cout<<name<<" "<<object<<" is "<<grade;
    }

    void manager::add_student_info(const class student &info) {
        manager::allinfo.insert({info.name,info.object_grade});
    }

    void manager::select_user_opertion() {
        int a[10];
        while(cin>>a){
            switch(a){

            }

        }
    }
    manager::~manager() {
        cout<<"quit manager"<<endl;
    }
}