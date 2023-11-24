#include<stdio.h>
int sum(int n)
{
    int firstdigit,lastdigit;
    lastdigit=n%10 ;
    while(n>=10)
    {
        n=n/10;
    }
    firstdigit=n;

    return firstdigit+lastdigit;
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);

    printf("Sum of first digit and last digit is = %d",sum(n));

    return 0;
}
