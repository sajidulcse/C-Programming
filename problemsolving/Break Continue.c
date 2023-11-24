#include <stdio.h>
int main()
{
    int i;
    for(i=1; i<=5; i++)
    {
	if(i==2) continue;
        printf("%d\n",i);
	if(i==4) break;
    }
    return 0;
}


