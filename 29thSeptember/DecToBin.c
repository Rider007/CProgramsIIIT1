#include <stdio.h>

int dtobin(int);

void main()
{
    int n,r;
    printf("Enter a decimal number:\n");
    scanf("%d",&n);
    r=dtobin(n);
    printf("The binary equivalent of %d is %d",n,r);
}

int dtobin(int d)
{
    int r,b=0,i=1;
    while(d>0)
    {
        r=d%2;
        d=d/2;
        b=b+r*i;
        i=i*10;
    }
    return b;
}
