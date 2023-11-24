#include<stdio.h>
int main()
{
    int a[]= {10,20,25,77,15,49,57,1,2,3,4};
    int n=2, i, flag=1;

    //printf("Enter the number: ");
    //scanf("%d",&n);


    for(i=0;i<11;i++)
    {
        if(n==a[i])
        {
          printf("%d was found in index %d\n",n,i);
          flag=0;
        }

    }
    if(flag==1)
    {
        printf("not found\n");
    }
    return 0;
}
