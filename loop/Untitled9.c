#include <stdio.h>
int main()
{
    int row,col;

    for(row=5;row>=1;row--)    //Opposite of Pattern Type 1//
    {
        for(col=1;col<=row;col++)

               printf("%c ",col+64);
               printf("\n");
    }

    return 0;

}
