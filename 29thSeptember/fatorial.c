#include <stdio.h>

int fact(int);

void main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("The factorial of %d is %d",n,(fact(n)));
}

int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
