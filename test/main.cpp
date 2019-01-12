#include <iostream>

typedef struct data{
    int a ;
    int b;
}data;

int func(data *a)
{
    return a->b = 10;
}


int main() {

}