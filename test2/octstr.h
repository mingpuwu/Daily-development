//
// Created by mingp on 2019/2/17.
//

#ifndef TEST2_OCTSTR_H
#define TEST2_OCTSTR_H


class octstr {
public:
    char *data;
    int len;
    octstr(char *,int);
    ~octstr()= default;
};


#endif //TEST2_OCTSTR_H
