#include<stdio.h>
int main()
{
    int row,col;
    for(row=5; row>=1; row--)

    {
        {
            for(col=1; col<=5-row; col++)
                printf(" ");
        }
        {
            for(col=1; col<=row; col++)
                printf("* ");     //Same to Pattern Type 5 . just space into print f//
        }
        printf("\n");
    }
}


