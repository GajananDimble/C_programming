#include<stdio.h>
int main()
{
    int ivalue=11;
    char cvalue='M';

    int*iptr=&ivalue;
    char*cptr=&cvalue;

    printf("size of iptr:%lu\n",sizeof(iptr));
    printf("size of cptr:%lu\n",sizeof(cptr));

    return 0;
}