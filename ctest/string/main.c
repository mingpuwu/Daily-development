#include<stdio.h>
#include<string.h>


int main()
{
    char data[] = "$GPGGA,063209.00,3120.48880635,N,12129.85621096,E,5,50,0.4,77.4340,M,0.0000,M,01,2954*6D";

    char* p = strchr(data,',');
    char head[256] = "$GBGGA";

    int end = strspn(data,"$GPGGA");
    printf("%d\n",end);
    memcpy(data,head,strlen(head));

    printf("%s\n",data);

    char * sum = strrchr(data,'*');
    printf("%s\n",sum);

    *sum = '\0';

    printf("%s\n",data);
}
