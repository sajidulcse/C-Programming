#include<stdio.h>
int main()
{
    int row,col;
    for(row=1;row<=5;row++)
    {
        {
            for(col=1;col<=5-row;col++)
                printf(" ");
        }
        {
            for(col=1;col<=row;col++)
                printf("* ");        //Like Pattern 6. Just Space after %d//
        }
          printf("\n");
    }
    for(row=5-1;row>=1;row--)
    {
        {
            for(col=1;col<=5-row;col++)
                printf(" ");
        }
        {
            for(col=1;col<=row;col++)
                printf("* ");       //Like Pattern 6. Just Space after %d//
        }
          printf("\n");
    }

    return 0;
}



