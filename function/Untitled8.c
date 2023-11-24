#include <stdio.h>
#include <string.h>

//! Function Prototype / Declaration
int sum(int a,int b);

int main()
{
    int x,y;
    printf("Enter two integers number: ");
    scanf("%d%d",&x,&y);
    int ans= sum(x,y);
    printf("Sum= %d\n",ans);//!function call
    return 0;
}
//! Function Definition
int sum(int a,int b)
{
    return a+b;
}

