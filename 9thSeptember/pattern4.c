#include<stdio.h>
void main()
{
    int i,j,k,n=5,l=4,d=5;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=n;j++)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("* ");
            n--;
        printf("\n");
    }
    n=2;
    for(i=1;i<d;i++)
    {
        for(j=1;j<=n;j++)
            printf(" ");
        for(k=1;k<=l;k++)
            printf("* ");
            l--;
            n++;
        printf("\n");
    }
}
