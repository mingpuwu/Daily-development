#include <iostream>

using namespace std;
template <typename T>
int func(const T &arg1, const T &arg2){
    cout<<"func arg1 is "<<arg1<<"   func arg2 is "<<arg2<<endl;
    return 0;
};
int main() {
    string a ="asd";
    string b = "qwe";
    std::cout << "Hello, World!" << std::endl;
    func(1,2);
    func('1','2');
    func(a,b);
    func(2
            ,1);
    return 0;
}