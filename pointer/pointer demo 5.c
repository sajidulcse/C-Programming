#include<stdio.h>
void swapping(int *ptr1,int *ptr2)
{
    int temp;

    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}

int main()
{
    int x=11,y=55;
    printf("Before swapping = x=%d\n y=%d\n",x,y);
    swapping(&x,&y);
    printf("After swapping = x=%d\n y=%d",x,y);


    return 0;
}

