//
// Created by mingp on 2019/2/16.
//

#ifndef AVN_CLIENT_OCTSTR_H
#define AVN_CLIENT_OCTSTR_H

typedef unsigned char uchar;

namespace oct {

    class octstr {
    public:
        int len;
        uchar *data;

        octstr(uchar *,int);

        ~octstr()= default;

        void append(octstr);

        void append(uchar*,int);

        void dump();

    };

}
#endif //AVN_CLIENT_OCTSTR_H
