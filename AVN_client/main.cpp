#include <iostream>
#include "octstr.h"
#include "data.h"
using namespace std;
using namespace oct;

int main() {
    uchar request_num[]={0x05,0x04};
    uchar len[] = {0x02};
    uchar data_type[] = {0x01};
    uchar profession_data[] = {0x09};

    data mydata(request_num,len,data_type,profession_data);

    //octstr os = mydata.get_data();
    //os.dump();


    std::cout << "Hello, World!" << std::endl;
    return 0;
}