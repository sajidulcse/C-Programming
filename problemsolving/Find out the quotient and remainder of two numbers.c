#include<stdio.h>
int main()
{
    int a,b,quotient,remainder;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);

    quotient=a/b;
    remainder=a-(a/b)*b;

    printf("Quotient is = %d\n",quotient);
    printf("Remainder is =%d\n",remainder);

    return 0;
}
