#include<stdio.h>

void main()
{
    int t,i=1,m=1;
    printf("Enter the value:\n");
    scanf("%d",&t);
    printf("Multiplication table of %d is:\n\n",t);
    for(;i<=10;i++)
    {
        m=i*t;
        printf("%d X %d = %d\n",t,i,m);
    }
}
