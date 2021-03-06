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
        cout<<name<<" "<<object<<" is "<<grade<<endl;
    }

    void manager::add_student_info(const class student info) {
        cout<<"add "<<info.name<<endl;
        manager::allinfo.insert({info.name,info.object_grade});
        cout<<"info: "<<manager::allinfo.size()<<endl;
    }

    int manager::select_user_opertion() {
        char a;
        char name[100],object[100];
        string strname,strobject;
        int grade;
        while(cin>>a){
            switch(a){
                case '1':
                    cout<<"please input student name"<<endl;
                    cin>>name;
                    cout<<"please input student object"<<endl;
                    cin>>object;
                    cout<<"please input student grade"<<endl;
                    cin>>grade;
                    strname = name;
                    strobject = object;
                    manager::set_student_grade(strname,strobject,grade);
                    break;
                case '2':
                    cout<<"please student name"<<endl;
                    cin>>name;
                    strname =name;
                    student stuarg(strname);
                    manager::add_student_info(stuarg);
                    return 1;
                    break;
            }
            return 1;
        }
        return 0;
    }
    manager::~manager() {
        cout<<"quit manager"<<endl;
    }

}