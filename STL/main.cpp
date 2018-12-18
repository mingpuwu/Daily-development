#include <iostream>
#include <vector>
using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    vector<int> vector_test;
    int i = vector_test.size();
    cout<<"vector size is "<<i<<endl;

    for(int i =0;i<5;i++)
        vector_test.push_back(i);
    try {
        //vector_test.at(6)=i;
        cout << "vector 3 num is " << vector_test.at(6) << endl;
    }
    catch (const out_of_range &oor){
        cerr<<"out of range   "<<oor.what()<<endl;
    }

    cout<<"vector 3 num is "<<vector_test[3]<<endl;
    return 0;
}