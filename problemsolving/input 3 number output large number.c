
#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter three number: ");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
       printf("%d is largest number\n",a);

    else if (b>c)
            printf("%d is large number.\n",b);

    else if (c>a)
            printf("%d is large number.\n",c);
    else
        printf("Wrong Input");

    return 0;

}
