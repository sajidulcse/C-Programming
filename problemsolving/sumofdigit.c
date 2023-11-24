#include<stdio.h>
#include<math.h>




int main()
{
    int n, firstdigit,lastdigit;
    printf("Enter a number:");
    scanf("%d",&n);
    lastdigit=n%10;
   /* while(n>=10) //with loop
    {
        n=n/10;
    }
    firstdigit =n; */
    int digits = (int)(log10(n)); //without loop // floor() it removes decimal part and takes only int part
    firstdigit = (int)(n / pow(10, digits)); // (int) it removes decimal part and takes only int part
    printf("Sum of first digit and last digit is = %d",firstdigit+lastdigit);

    return 0;
}
