#include <iostream>
#include "octstr.h"
int main() {
    char data[2] = {1,2};
    octstr os(data,2);
    printf("%d\n",os.len);
    printf("%d\n",os.data[0]);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}