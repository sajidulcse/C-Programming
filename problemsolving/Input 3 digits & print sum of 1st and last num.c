#include<stdalign.h>
int main()
{
    int firstdigit,lastdigit,a,sum;

    printf("Enter three digits numbers :");
    scanf("%d",&a);

    firstdigit= a%10;
    lastdigit= a/100;

    sum=firstdigit+lastdigit;

    printf("The sum of frist and last digits number: %d\n",sum);

    return 0;


}
