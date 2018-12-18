#include <iostream>
#include <vector>

using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    //vector<int> i(10,1);
    vector<int> i{1,2,3,4,5,6,7,8,9};
    //vector<int> i;
    //for (int j = 0; j <10 ; ++j) {
    //    cout<<i.at(j)<<endl;
    //}
   // a = 3;
    //cout<<i.front()<<endl;
    auto a =i.begin();
    for(a;a!=i.end();a++)
        cout<<*a<<endl;
    return 0;
}