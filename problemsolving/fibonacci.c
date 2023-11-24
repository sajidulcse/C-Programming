#include<stdio.h>

int main()
{
    long long n,a=0,b=1,fib=a+b,i;
    z:printf("Enter the integer value of n for nth term:");
    scanf("%lld",&n);

    if(n<1)
    {
        printf("Invalid Input\n");
        goto z;
    }
    else if(n==1)
    {
        printf("Fibonacci Series till 1st term: ");
        printf("0\n");
    }
    else if(n==2)
    {
        printf("Fibonacci Series till 2nd term: ");
        printf("0 1");
    }
    else if(n>2 && n<94)
    {
        if(n==3)
            printf("Fibonacci Series till 3rd term: ");
        else
            printf("Fibonacci Series till %dth term: ",n);
        printf("0 1");
        for(i=3;i<=n;i++){
        printf(" %lld",fib);
        a=b;
        b=fib;
        fib=a+b;
    }
    }
    else
    {
        printf("Out of Range for long long data type in c.\n");
        goto z;
    }

    return 0;
}
