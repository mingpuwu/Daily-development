#include <iostream>

using  namespace std;


void selectsrot(int * a,int len){
    for(int i = 0;i<len;i++){
        int max = i;
        for(int j = i+1;j<len;j++){
            if(a[j]>a[max]){
                max = j;
            }
            int tmp = a[max];
            a[max] = a[i];
            a[i] = tmp;
        }
    }
}

int main() {
    int a[5] = {3,4,2,1,6};
    selectsrot(a,5);
    for(int i =  0;i<5;i++){
        cout<<a[i]<<endl;
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}