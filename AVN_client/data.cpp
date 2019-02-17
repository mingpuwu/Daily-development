//
// Created by mingp on 2019/2/16.
//

#include "data.h"
#include <stdio.h>
uchar head[2]= {0x05,0x04};
uchar enctry[1] = {0x00};
uchar ver[1] = {0x19};
uchar source_id[16] = {0x12,0x4e,0x25,0xf3,0xa4,0x3c,0x44,0x82,0xbc,0x95,0x80,0x68,0xc7,0x59,0x3c,0x85};
uchar tail[2] ={0x0d,0x0a};


data::data(uchar * req_num,uchar *n,uchar *dape,uchar *pro_data) {
    request_num = req_num;
    len = n;
    data_type = dape;
    profession_data = pro_data;

}

oct::octstr data::get_body() {
    oct::octstr body(request_num,2);
    body.append(len,2);//有问题
    body.append(data_type,1);
    //body.append(profession_data,*(int*));
    return body;
}

oct::octstr data::get_data() {
    oct::octstr body =get_body();
    oct::octstr os(head,2);
    os.append(enctry,1);
    os.append(ver,1);
    os.append(source_id,16);
    os.append(body);
    uchar checksum = check_sum(os);
    os.append(&checksum,1);

    return os;
}

uchar data::check_sum(oct::octstr os) {
    uchar checksum = 0;
    for(int i;i<os.len;i++)
        checksum = checksum+os.data[i];
    return checksum;
}