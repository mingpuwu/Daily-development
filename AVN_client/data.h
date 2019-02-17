//
// Created by mingp on 2019/2/16.
//
#include "octstr.h"
#ifndef AVN_CLIENT_DATA_H
#define AVN_CLIENT_DATA_H

typedef unsigned char uchar;

class data{
public:
    uchar * request_num;
    uchar * len;
    uchar * data_type;
    uchar * profession_data;
    uchar *raw_data;
    data(uchar *,uchar *,uchar *,uchar *);
    ~data()= default;
    oct::octstr get_data();

private:
    uchar check_sum(oct::octstr);
    oct::octstr get_body();
};


#endif //AVN_CLIENT_DATA_H
