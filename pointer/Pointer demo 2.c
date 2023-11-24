#include<stdio.h>
int main()
{
    int x=10,y=7,z=12;

    int *ptr;

    ptr=&x;
    printf("x=%d\n",*ptr);

    ptr=&y;
    printf("y=%d\n",*ptr);

    ptr=&z;
    printf("z=%d\n",*ptr);

    return 0;

}
