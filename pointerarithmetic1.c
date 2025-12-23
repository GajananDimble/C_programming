#include<stdio.h>
int main()
{
    int arr[]={11,21,51,101,111};
    int*p=NULL;
    int*q=NULL;

    p=&(arr[1]);
    q=&(arr[4]);

    printf("data fetch by p is:%d\n",*p);      //21
    printf("data fetch by q is:%d\n",*q);     //111


    return 0;
}