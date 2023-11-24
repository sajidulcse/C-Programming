#include<stdio.h>
int main()
{
    char a[]="Sajid";

    int i=0;
    while(a[i]!='\0')    //when condition false while loop don't work
    {
        printf("%c",a[i]);
        i++;
    }
}
