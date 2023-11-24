#include<stdio.h>
int main()
{
    int i,j,a[4][3]= { {6,4,7}, {5,3,7}, {66,88,99},{66,3,22} };
    for(i=0; i<4; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
