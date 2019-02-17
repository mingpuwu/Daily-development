//
// Created by mingp on 2019/2/16.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "octstr.h"
namespace oct{

    octstr::octstr(uchar *d,int n) {
        data = (uchar *)malloc(n*sizeof(uchar));
        len = n;
        memset(data,0,n);
        memcpy(data,d,n);
    }

    void octstr::append(oct::octstr os) {
        int sum_len = this->len+os.len;
        uchar *tmp = (uchar *)malloc((sum_len)*sizeof(char));
        memset(tmp,0,sum_len);
        memcpy(tmp,this->data,this->len);
        memcpy(tmp+(this->len),os.data,os.len);
        this->data = tmp;
        this->len = sum_len;
    }

    void octstr::append(uchar * d,int data_len) {
        int sum_len = len + data_len;
        uchar *tmp = (uchar *)malloc(sum_len* sizeof(uchar));
        memset(tmp,0,sum_len);
        memcpy(tmp,data,len);
        memcpy(tmp+len,d,data_len);
        data = tmp;
        len = sum_len;
    }

    void octstr::dump() {
        for(int i=0;i<len;i++)
            printf("%d\n",data[i]);
    }



}