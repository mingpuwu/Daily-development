#include <iostream>
#include <string>

class student
{
    public:
            char *name;
            int grade;
            student(char *n, int g){
                name = n;
                grade = g;
            }
            ~student(){

            };
            void print_student_info();
            void set_student_info(int grade);
};

class student_obj_grade :public student{
    public:
            student_obj_grade():student("mingpuwu",99){

            };
            char *obj;
            void set_student_obj(char *);
            void print_student_info();
};

void student_obj_grade::set_student_obj(char *obj) {
    student_obj_grade::obj = obj;
}


void student::set_student_info(int grade) {
    student::grade = grade;
}

void student::print_student_info() {
    std::cout << "student name is "<<student::name<<std::endl;
    std::cout << "student garde is " << student::grade<<std::endl;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    student mingpu("mingpu",99);
    mingpu.print_student_info();
    mingpu.set_student_info(96);
    mingpu.print_student_info();
    return 0;
}