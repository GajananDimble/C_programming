#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd=0;
    char FileName[20];
    printf("Enter the Name of file that you want open:\n");
    scanf("%s",FileName);

    fd=open(FileName,O_RDWR);
    if(fd== -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File successfully opened with fd:%d\n",fd);
    }

    return 0;
}
