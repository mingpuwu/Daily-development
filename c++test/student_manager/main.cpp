#include <iostream>
#include "student.h"
#include "manager.h"
#include "mysql.h"

int main() {
    using namespace stu;
    using namespace mg;
    MYSQL *sql;
    manager admin;

    sql = mysql_init((MYSQL*)0);
    cout<<sql->status<<endl;


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