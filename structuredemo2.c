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
    
    obj.i=11;
    obj.f=90.4f;
    obj.j=21;

    printf("%d\n",obj.i);
    
    printf("%d\n",obj.f);
    
    printf("%d\n",obj.j);

    return 0;
}