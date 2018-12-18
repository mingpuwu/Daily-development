#include <iostream>
using namespace std;

class CSingleton
{
private:
    CSingleton()
    {
    }
    static CSingleton *p;

public:
    static CSingleton* getInstance()
    {
        if(p == NULL)
            p = new CSingleton();
        return p;
    }
};

CSingleton* CSingleton::p = NULL;
int main() {
    std::cout << "Hello, World!" << std::endl;
    CSingleton *t = CSingleton::getInstance();
    CSingleton *tt = CSingleton::getInstance();
    cout << t << endl << tt << endl;
    return 0;
}