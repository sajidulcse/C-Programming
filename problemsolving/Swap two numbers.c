#include<stdio.h>
int main()
{
    double a,b;

    printf("Before swap a=%d b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;

    printf("After swap a=%d b=%d,a,b");

    return 0;
}
