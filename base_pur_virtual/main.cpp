#include <iostream>
#include <string>
using namespace std;

class abstract_base{
public:
    string name="mingpu";
    abstract_base() = default;
    virtual ~abstract_base(){}
    void basefunc();
    virtual void virtual_func() const ;
};

class derivation :public abstract_base{
public:
    derivation()= default;
    ~derivation(){};
    void self() const;
    void virtual_func() const;
};

void abstract_base::virtual_func() const {
    cout<<"this is base virtual"<<endl;
}

void abstract_base::basefunc() {
    cout<<"im base func"<<endl;
}

void derivation::self() const {
    std::cout<<"this is myself fun"<<endl;
}

void derivation::virtual_func() const {
    cout<<"vitural func "<<endl;
}


int main() {
    derivation a;
    a.self();
    a.basefunc();
    a.virtual_func();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}