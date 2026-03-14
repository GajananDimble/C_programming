#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd=0;
    char FileName[20];
    printf("Enter the Name of file that you want create:\n");
    scanf("%s",FileName);

    fd = creat(FileName,0777);

    if(fd== -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("file successfully created with fd :%d\n",fd);
    }
    return 0;
}
