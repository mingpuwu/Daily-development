#include <iostream>
using namespace std;
class tank{
public:
    tank(){
    }

    virtual ~tank() =default;
};

class tanka:public tank{
public:
    tanka(){
        cout<<"this is  tank a "<<endl;
    }

    ~tanka() = default;
};

class tankb :public tank{
public:
    tankb(){
        cout<<"this is tankb"<<endl;
    }

    ~tankb() = default;

};

class factory{
public:
    factory(){

    }

    tank * creat_tank(int i){
        tank * p = NULL;
        switch(i){
            case 1:
                p = new tanka();
                break;
            case 2 :
                p = new tankb();
                break;
        }
        return p;
    }
    ~factory() = default;
};

int main() {
    factory tank_factory;
    tank *tank_instance = NULL;
    tank_instance = tank_factory.creat_tank(1);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}