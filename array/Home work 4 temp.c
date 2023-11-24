#include<stdio.h>
int main()
{
    int num;
    printf("Enter the positive number to find factorial: ");
    scanf("%d",&num);

    factorial(num);

}
void factorial(int num)
{
    int count,fact=1;
    if (num==0)
    {
        printf("Factorial of 0 is 1 (!0 = 1)");
    }
    else
    {
        for(count =1;count<=num;count++)
        {
            fact = fact * count;
        }
        printf(" Factorial of %d is %d\n",num,fact);
    }


}
