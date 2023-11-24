#include<stdio.h>
int main()
{
    char a[]="Bangladesh";

    int i=0,len=0;

    while(a[i]!='\0')
    {
        i++;
        len++;
    }
    printf("Leanth of Bangladesh is %d\n",len);
}
