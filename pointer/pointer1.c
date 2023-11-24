#include<stdio.h>
int main()
{
    int x=5;
    int *ptr;
    ptr= &x;
    printf("value of x = %d\n",x);
    printf("Address of x = %d\n",&x);

    printf("Pointer value of x = %d\n",ptr);
    printf("Pointer value of x = %d\n",*ptr);
    printf("Pointer variable address = %d\n",&ptr);
}
