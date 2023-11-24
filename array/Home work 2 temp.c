/*Find out the highest temp of city two*/
#include<stdio.h>
int main()
{
    int i,c2[12],index;

    printf("Enter the value of 12 months temp of city two:\n");

    for(i=0;i<12;i++)
    {
        scanf("%d",&c2[i]);
    }
    int max=c2[0];
    for(i=1;i<12;i++)
    {
        if(max<c2[i])
        {
            max=c2[i];
        }
    }

    printf("The highest temperature of city two is= %d\n",max);

        return 0;

}
