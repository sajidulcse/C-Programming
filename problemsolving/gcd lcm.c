#include<stdio.h>

int main()
{
    int x,y,a,i,hcf,lcm;
    printf("Enter two integer numbers for operation:");
    scanf("%d %d",&x,&y);
    printf("Enter 1 for HCF, 2 For LCM, 3 For Exit\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
            for(i=1; i <= x && i <= y; ++i)
            {
                if(x%i==0 && y%i==0)
                        hcf = i;
            }

            printf("H.C.F of %d and %d is %d", x, y, hcf);
            goto p;
        case 2:
            lcm = (x > y) ? x : y;
            while (1) {
                if ((lcm % x == 0) && (lcm % y == 0))
                {
                    printf("The LCM of %d and %d is %d.", x, y, lcm);
                break;
                }
               ++lcm;
                       }
        case 3:
            goto p;
    }
    p:return 0;
}
