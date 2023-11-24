#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a,num;
    int lower=7,upper=12;
    printf("Enter a Number:\n");
    scanf("%d",&a);

    srand(time(NULL));

    if(a>7)
      {
          y:num=rand()%7;
          if(num==0)
            goto y;
          else
          printf("%d",num);
      }
    else if(a<7)
      {
          num=(rand()%(upper-lower+1))+lower;
          printf("%d",num);
      }
    else if(a==7)
      {
         x:num=rand()%12;
          if(num==7 || num==0)
            goto x;
           else
           printf("%d",num);
      }

      return 0;

}
