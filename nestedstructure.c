#include<stdio.h>

struct demo
{
    int i;
    float f;
};

struct hello
{
    int no;
    float marks;
    struct demo obj;  //nested
    
    
};
int main()
{
    printf("size of structure is :%lu\n",sizeof(struct hello));    //16
    
    
    return 0;
}