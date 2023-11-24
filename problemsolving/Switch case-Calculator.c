#include<stdio.h>
#include<math.h>

int main()
{
    int a,b;
    float c,d;
    char op;

    z:printf("Enter an Operator (+,-,*,/,%%) : ");
    scanf("%c",&op);


    if(op=='/' || op=='+' || op=='-' || op=='*')
    {

        y:printf("Enter two float or integer numbers for all operation without modulus : ");
        scanf("%f %f",&c,&d);

    }
    else
    {
        printf("Enter two integer numbers for modulus operation : ");
        scanf("%d %d",&a,&b);
    }


    switch(op)
    {
     case '+':
         {
             printf("%f + %f = %f\n",c,d,c+d);
             break;
         }

     case '-':
         {
             printf("%f - %f = %f\n",c,d,c-d);
             break;
         }

     case '*':
        {
            printf("%f * %f = %f\n",c,d,c*d);
            break;
        }

     case '/':
        {
            printf("%f / %f = %f\n",c,d,(c/d)*1.0);
            break;
        }

    case '%':
        {
            if(floor(a)==ceil(a) && floor(b)==ceil(b))
            {
            printf("%d %% %d = %d\n",a,b,a%b);
            }
            else
            {
                printf("Modulus Operation is invalid for decimal number\n");
                goto y;
            }
            break;
        }

     default:
         printf("invalid Operator");
         goto z;

    }

    return 0;

}
