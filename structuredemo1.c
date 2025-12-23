#include<stdio.h>

struct demo
{
    int i;
    float f;
    int j;
};
int main()
{
    struct demo obj;
    
    printf("size of demo is:%d\n",sizeof(struct demo));  //12
    printf("size of object is:%d\n",sizeof(obj));

    return 0;
}