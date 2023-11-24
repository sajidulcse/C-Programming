#include<stdio.h>
int  main()
{
    int x=10,y=77,sum;

    int *ptr1,*ptr2;

    ptr1=&x;
    ptr2=&y;

    sum=*ptr1+*ptr2;
    printf("Sum = %d",sum);
    return 0;
}
