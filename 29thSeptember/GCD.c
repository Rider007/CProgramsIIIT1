#include <stdio.h>
int gcd(int,int);

void main()
{
    int a,b,r;
    printf("Enter the numbers:\n");
    scanf("%d%d",&a,&b);
    r=gcd(a,b);
    printf("GCD of %d and %d is: %d",a,b,r);
}

int gcd(int a,int b)
{
    int h,l,r=1;
    if(a>b)
    {
        h=a;
        l=b;
    }
    else
    {
     h=b;
     l=a;
    }
    while(r>0)
    {
        r=h%l;
        h=l;
        l=r;
    }
    return h;
}
