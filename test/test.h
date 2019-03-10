//
// Created by mingp on 2019/2/17.
//
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#ifndef TEST_TEST_H
#define TEST_TEST_H
typedef unsigned char uchar;
namespace oct {
    class octstr {
    public:
        int len;
        uchar *data;

        octstr(uchar *, int);

        ~octstr() = default;

        void append(octstr);

        void append(uchar *, int);

        void dump();

    };
}

#endif //TEST_TEST_H
