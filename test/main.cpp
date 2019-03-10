#include <iostream>
#include <memory>
#include <vector>
#include <list>
#include <map>
#include <set>
using namespace std;


class singleton{
public:
    static singleton * get_instance(){
        if(instance_point = NULL){
            instance_point = new singleton();
        }
        return instance_point;
    }
private:
    static singleton * instance_point;
    singleton(){
        cout<<"singleton"<<endl;
    }
    ~singleton(){}
};

singleton * singleton::instance_point = NULL;

int main(){
    singleton * point = singleton::get_instance();
}