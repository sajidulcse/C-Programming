#include<stdio.h>
int main()
{
    int row,col;
    for(row=1;row<=5;row++)
    {
        {
            for(col=1;col<=5-row;col++)     //Like Pattern 1 just add extra Space Section//
                printf(" ");
        }
        {
            for(col=1;col<=row;col++)
            printf("%c",col+64);
        }
        printf("\n");
    }
    return 0;
}
