/*Find out the average temp of each city*/
#include<stdio.h>
int main()
{
    int i,j,city[4][12]/*sum[]={0,0,0,0}*/,sum[4][1]={0};



    printf("Enter the value of 4 city of 12 months temp:\n");
    for(i=0;i<4;i++)
        for(j=0;j<12;j++)
        {
        scanf("%d",&city[i][j]);
        sum[i][1]=sum[i][1]+city[i][j];
        }

    for(i=0;i<4;i++)
    {
        printf("Average temp of %d city : %.2f\n",i+1,sum[i][1]/12.00);
    }

    /*printf("Average of 1st city: %.2f\n",sum[0][1]/12.00);
    printf("Average of 2nd city: %.2f\n",sum[1][1]/12.00);
    printf("Average of 3rd city: %.2f\n",sum[2][1]/12.00);
    printf("Average of 4th city: %.2f\n",sum[3][1]/12.00);*/
        return 0;

}
