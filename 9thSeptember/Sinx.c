#include<stdio.h>

void main()
{
    float x,term,sin,i;
    int n;
    printf("Enter the value x:\n");
    scanf("%f",&x);
    printf("x=%f\n",x);
    n=100;
    x=(x/180)*3.14;
    sin=x;
    term=x;
 for(i=3;i<2*n;i=i+2)
    {
        term=(term*x*x*(-1))/(i*(i-1));
        sin=sin+term;
    }
    printf("The value of Sin(%f):%f",x,sin);
}
