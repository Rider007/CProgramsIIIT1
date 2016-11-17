#include <stdio.h>

int fib(int);

void main()
{
    int n,i,r=0;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("%d %d ",0,1);
    for(i=1;i<n-1;i++)
    {
     r=fib(i);
     printf("%d ",r);
    }
}

int fib(int n)
{
    if(n<=1)
        return 1;
    else
        return fib(n-1)+fib(n-2);
}
