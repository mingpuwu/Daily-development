#include <iostream>

class base{
public:
    base() = default;
    ~base()=default;
    virtual void add(){
        std::cout<<"base func"<<std::endl;
    }
};

class child :public base{
public:
    child() = default;
    ~child() = default;
    void add();
};

void child::add() {
    std::cout<<"child func"<<std::endl;
}

int main() {
    child a;
    base b;
    b.add();
    a.add();
    a.base::add();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}