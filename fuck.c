#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <pwd.h>
#include <readline/history.h>

void main(int argc, char *argv[])
{
    if (strcmp(argv[1], "sudo") == 0)
    {
        __uid_t uid;
        struct passwd *pw;

        uid = geteuid();

        pw = getpwuid(uid);

        char path[1000];
        strcpy(path, "/home/");
        strcat(path, pw->pw_name);
        strcat(path, "/.history");
        FILE *fp;
        fp = fopen(path, "r");
        if (fp == NULL)
        {
            printf("null");
            return;
        }
        else
        {
            char data[1000];
            while(fscanf(fp,"%[^\n]",data)!=EOF){
                fgetc(fp);

            }
            printf("%s",data);
        }
    }
}
