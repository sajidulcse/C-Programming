#include<stdio.h>

int main()
{
    long long x,factorial=1;
   m:printf("Enter any integer number for it's factorial: ");
    scanf("%lld",&x);

    if(x==0)
    {
        printf("Factorial for the number 0 is= 1\n");
        return 0;
    }
    else if(x<0)
    {
        printf("Invalid Number\n");
        goto m;
    }
    else if(x<21)
    {
        long long i=1,y=x;
        while(y--)
        {
            factorial=factorial*i;
            i++;
        }
    }
    else
    {
        printf("Out of Range for long long data type\n");
        goto m;
    }

    printf("Factorial for the number %lld is= %lld\n",x,factorial);
    return 0;

}
