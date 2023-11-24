#include<stdio.h>
int main()
{
    int x=10;

    int *ptr;

    ptr=&x;

    printf("Value of x is %d\n",x);
    printf("Address of x is %u\n",&x);
    printf("Address of x is %d\n",ptr);
    printf("Address of x is %d\n",*ptr);
    printf("Address of x is %d\n",&ptr);



    return 0;
}
