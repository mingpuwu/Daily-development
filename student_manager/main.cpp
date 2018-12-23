#include <iostream>
#include "student.h"
#include "manager.h"

int main() {
    using namespace stu;
    using namespace mg;

    manager admin;
    student man("xiaoming");
    man.set_grade("math",90);
    admin.add_student_info(man);
    admin.access_manager();
    while(admin.input_account_password()!= 1){
        cout <<"password is error"<<endl;
    }
    while(true) {
        admin.show_manager_selction();
        admin.select_user_opertion();
    }
    return 0;
}