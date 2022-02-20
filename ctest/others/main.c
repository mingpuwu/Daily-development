#include<stdio.h>
#include<inttypes.h>
#include<stdbool.h>
#include<limits.h>
#include<stdint.h>
#include<errno.h>
#include<string.h>
#include<ctype.h>
#include<time.h>

int main()
{
    bool a = true;
    if(a)
    {
        printf("!!!!!!!\n");
    }

    printf("int32 %d\n",INT32_MAX);
    printf("uint32 %u\n",UINT32_MAX);
    printf("int64 %ld\n",INT64_MAX);
    printf("uint64 %lu\n",UINT64_MAX);

    printf("%s\n",strerror(errno));

    if(isalnum(','))
    {
        printf("is alnum\n");
    }
    else
    {
        printf("is not alnum\n");
    }

    time_t t = time(NULL);
    //struct tm *st = gmtime(&t);
    struct tm *st = localtime(&t);
    char tb[125] = "";
    strftime(tb,sizeof(tb)-1,"%Y-%m-%d %H:%M:%S",st);
    printf("time [%s]\n",tb);

    struct tm pt = {0};
    strptime(tb,"%Y-%m-%d %H:%M:%S",&pt);
    printf("year %d\n",pt.tm_year);
}