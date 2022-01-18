#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>


int main()
{
    char lf[] = "linuxtest.txt";
    char wf[] = "windowstest.txt";
    int fd = open(wf,O_RDONLY);

    char buffer[125] = "";
    int len = read(fd,buffer,sizeof(buffer));

    char* pos2 = strstr(buffer,"\r\n");
    if(pos2)
    {
        printf("is windows\n");
        *pos2++ = '\0';
        *pos2 = '\0';
    }

    char *pos = strchr(buffer,'\n');
    if(pos)
    {
        printf("is linux\n");
        *pos = '\0';
    }

    printf("%d %s\n",len,buffer);
}