#include<stdio.h>
int main()
{
    int arr[]={11,21,51,101,111};
    int*p=NULL;
    int*q=NULL;

    p=&(arr[1]);
    q=&(arr[4]);

    printf("result of substraction is:%ld\n",q-p);  //Allowed

    q=q-2;

    printf("data pointed by q is %d\n",*q);//Allowed

    return 0;
}