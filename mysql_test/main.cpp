#include <iostream>
#include "mysql.h"

using namespace std;
int main() {
    MYSQL *sql;
    mysql_init(sql);
    //const char host[]= "localhost";
    //const char user[] = "root";
    //const char pwd[] = "asd.1234";
    //const char table[] = "mingpuwu";
    //const int port = 3306;
    //if( !(mysql_real_connect(sql,host,user,pwd,table,port,NULL,0)) )
    //    cout<<"connect mysql fail"<<endl;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}