#include <stdio.h>

void number_mod(int n);
int main()
{
  int n;
  printf("Enter the digits: ");
  scanf("%d",&n);
  number_mod(n);
  return 0;
}

void number_mod(int n)
{
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


