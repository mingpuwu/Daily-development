//
// Created by mingp on 2019/2/17.
//

#include "octstr.h"
#include <string.h>
#include <stdlib.h>

octstr::octstr(char *data, int len) {
    char *tmp = (char*)malloc(len*sizeof(char));
    memset(tmp,0,len);
    memcpy(tmp,data,len);
    this->len = len;
    this->data = tmp;
}