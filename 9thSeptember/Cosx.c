#include<stdio.h>

void main()
{
    float x,term,cos,i;
    int n;
    printf("Enter the value x:\n");
    scanf("%f",&x);
    printf("x=%f\n",x);
    n=100;
    x=(x/180)*3.14;
    cos=1;
    term=1;
 for(i=2;i<2*n;i=i+2)
    {
        term=(term*x*x*(-1))/(i*(i-1));
        cos=cos+term;

    }
    printf("The value of cos(%f):%f",x,cos);
}
