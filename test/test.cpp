//
// Created by mingp on 2019/2/17.
//

#include "test.h"
namespace oct {
    octstr::octstr(uchar *data, int len) {
        this->data = (uchar *) malloc(len * sizeof(uchar));
        this->len = len;
        memset(data, 0, this->len);
        memcpy(this->data, data, len);
    }

    void octstr::append(oct::octstr os) {
        int sum_len = this->len + os.len;
        uchar *tmp = (uchar *) malloc((sum_len) * sizeof(char));
        memset(tmp, 0, sum_len);
        memcpy(tmp, this->data, this->len);
        memcpy(tmp + (this->len), os.data, os.len);
        this->data = tmp;
        this->len = sum_len;
    }

    void octstr::append(uchar *data, int data_len) {
        int sum_len = this->len + data_len;
        uchar *tmp = (uchar *) malloc(sum_len * sizeof(uchar));
        memset(tmp, 0, sum_len);
        memcpy(tmp, this->data, this->len);
        memcpy(tmp + (this->len), data, data_len);
        this->data = tmp;
        this->len = sum_len;
    }

    void octstr::dump() {
        for (int i=0; i < len; i++)
            printf("%d\n", data[i]);
    }
}