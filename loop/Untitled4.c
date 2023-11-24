#include <stdio.h>
int main()
{
    int k=1,row,col;

    for(row=1;row<=5;row++)
    {
        for(col=1;col<=row;col++)

             {
                 printf("%d ",k++);
             }
               printf("\n");
    }

    return 0;

}
