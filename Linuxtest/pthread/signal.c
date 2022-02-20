#include<signal.h>
#include<stdio.h>

int main()
{
    FILE *fp = popen("uname -a","r");
    if(!fp)
    {
        return -1;
    }

    char buffer[125] = "";
    char* p = fgets(buffer,sizeof(buffer)-1,fp);
    printf("%s\n",buffer);

    fclose(fp);
}