#include<stdio.h>

struct demo
{
    int i;
    char ch1;
    char ch2;
    float f;
    int j;
};
int main()
{
    printf("size of structure is:%lu\n",sizeof(struct demo));
    
    return 0;
}