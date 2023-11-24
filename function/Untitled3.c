#include<stdio.h>
int p=10; //global variable

int max(int x, int y)
{
    if(x>y)
        return x;
    else
        return y;
}


int/*return type*/ min /*function name*/(int x, int y) //actual parameter / argument
{
    int z; // formal parameter
    if(x<y)
        return x;
    else
        return y; //return value
}

int min2(int x, int y)
{
    if(x<y)
        printf("The minimum number is: %d\n",x);
    else
        printf("The minimum number is: %d\n",y);
}

int max2(int x, int y)
{
    if(x>y)
        printf("The maximum number is: %d\n",x);
    else
        printf("The maximum number is: %d\n",y);
}

void hello(void)
{
    printf("Hello World");
}

int main()
{
    int a,b;
    printf("Enter Two Numbers:");
    scanf("%d %d",&a,&b);


    //printf("The maximum number is: %d\n",max(a,b));
    //printf("The minimum number is: %d\n",min(a,b));
    max2(a,b);
    min2(a,b);
    hello();
    return 0;
}
