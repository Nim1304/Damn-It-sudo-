#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<pwd.h>
#include<readline/history.h>

void main(int argc,char *argv[])
{
    if(strcmp(argv[1],"sudo")==0)
    {
        __uid_t uid;
        struct passwd *pw;

        uid = geteuid();

        pw = getpwuid(uid);

        char *path;
        path = (char *)malloc(100*sizeof(char));
        strcpy(path,"/home/");
        strcat(path,pw->pw_name);
        strcat(path,"/.bash_history");
        // printf("%s",path);
        printf("%s",path);
        // FILE *fp;
        // fp = fopen(path,"r");
        
        // char data[100];

        // while (fscanf(data,100,fp) != NULL)
        // {
        // printf("%s",data);
            
        // }
        

    }
}
