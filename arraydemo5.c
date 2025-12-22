#include<stdio.h>
int main()
{
    double arr[]={10.0,20.0,30.0,40.0};
    printf("size of arr:%lu:\n",sizeof(arr));//32

    arr++;  //error

    return 0;
}