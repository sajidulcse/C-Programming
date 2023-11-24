#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int rev=0,sum=0,digit=0;
    while(n)
    {
        int rem= n%10;
        rev= (rev*10)+rem;
        digit++;
        sum=sum+rem;
        n=n/10;

    }
    printf("digit: %d sum: %d Reverse: %d \n",digit,sum,rev);

}
