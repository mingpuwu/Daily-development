#include <iostream>

using namespace std;

class a{
private:
    a(){

    }
    static a *instance_point;

public:
    void out(){
        cout<<"this is a class"<<endl;
    }

    static a *getinstance()
    {   if(instance_point == NULL)
            instance_point = new a();
        return instance_point;
    }

};

//a* a::instance_point =NULL;

class b{
public:
    void call_a_out(a *point){
        cout<<"this is b class call handler"<<endl;
        point->out();
    }
};

a* a::instance_point =NULL;

int main() {
    std::cout << "Hello, World!" << std::endl;
    b b_instance;
    a * point = a::getinstance();
    b_instance.call_a_out(point);

    return 0;
}