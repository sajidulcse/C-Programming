#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a = ");
    scanf("%d",&a);
    printf("Enter a = ");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("A=%d \n",a);
    printf("B=%d \n",b);
    return 0;

}
