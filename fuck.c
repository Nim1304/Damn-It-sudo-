#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
// #include<history.h>
void main(int argc,char *argv[])
{
    if(strcmp(argv[1],"sudo")==0)
    {
        execv("echo `history | tail -2 | head -1 | cut -c8-999`");
    }
}
