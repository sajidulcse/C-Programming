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
                printf("* ");    //Same to Pattern Type 4 . just space into print f//
        }
          printf("\n");
    }

    return 0;
}

