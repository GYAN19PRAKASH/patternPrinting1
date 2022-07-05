#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,l,k;
    for(i=0;i<=6;i++)
    {
        for(j=65;j<=71-i;j++)
        {
            printf("%c ",j);
        }
        for(k=1;k<=i*2-1;k++)
        {
            printf("  ");
        }
        for(l=71-i;l>=65;l--)
        {
            if(l!=71)
                printf("%c ",l);
        }
        printf("\n");
    }
    return 0;
}
