#include<stdio.h>
int main()
{
    char str[100];
    gets(str);

    int i;

    if(str[0]>='a'&& str[0]<='z')
    {
        str[0]-=32;
    }

    for(i=1; str[i]; i++)
    {
        if(str[i]==' 9')
        {
            if(str[i+1]>='a'&& str[i+1]<='z')
            {
                str[i+1]-=32;
            }
        }
    }

puts(str);

return 0;
}
