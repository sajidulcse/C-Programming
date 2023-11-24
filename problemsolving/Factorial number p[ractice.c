#include<stdio.h>

int main()
{
    int n,i=1,fact=1;

    m:printf("Enter a number to find factorial : ");
    scanf("%d",&n);

   if(n<0)
    {
        printf("Invalid Number.\n");
        goto m;
    }
    else
          while(i<=n)
       {
          fact=fact*i;
          i++;
       }

    printf("The factorial of %d is= %d",n,fact);
    return 0;

}
