#include <iostream>
int array[]={1,2,3,4,
             5,6,7,8};

int b[4][2]={};
using namespace std;
void rollback()
{
       int row[2][4]={};
       int line[]={};
       for(int i=0;i<8;i++){
           row[i/4][i%4]=array[i];
       }
       for(int i=0;i<8;i++){
            b[i%4][1-i/4] = row[i/4][i%4];
       }
}

int main() {
    using namespace std;

    rollback();
    for(int i= 0;i<8;i++){
        if(i%2==0)
            cout<<endl;
        cout<<b[i%4][1-i/4];
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}