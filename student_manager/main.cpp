#include <iostream>
#include "student.h"
#include "manager.h"
int main() {
    using namespace stu;
    using namespace mg;
    student man("xiaoming");
    man.set_grade("math",90);
    man.look_object_grade("math");
    man.calcu_average_grade();
    man.add_object("gaoshu",80);
    man.calcu_average_grade();
    manager admin;
    admin.access_manager();
    admin.input_account_password("mingpuwu","asd.1234");
    admin.add_student_info(man);
    cout<<admin.allinfo.size()<<endl;
    cout<<admin.allinfo["xiaoming"]["math"]<<endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}