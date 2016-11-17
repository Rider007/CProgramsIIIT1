#include<stdio.h>
int fact(int);
void main()
{
    int i=0,n,j=0,k=0,ai=0,l=0,b=0;
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    int d=n;
    for(i=1;i<=d+1;i++)
        printf(" ");
    printf("%d",fact(0));
    printf("\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=d;j++)
            printf(" ");
        for(k=1;k<=i;k++)
        {
            while(l<=i)
            {
                ai=fact(i)/(fact(i-l)*fact(l));
                printf("%d ",ai);
                l++;
            }


        }
        l=0;
        d--;
        printf("\n");
    }
}

int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
