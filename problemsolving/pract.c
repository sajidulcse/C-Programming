#include<stdio.h>

int main()
{
    int a=10;

    for(a=10;a>=0;a--)
    {
        if(a==5)
            break;
        printf("My number is=%d\n",a);
    }

    return 0;

}
