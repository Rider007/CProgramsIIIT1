#include <stdio.h>
// to find the value of exp(x)
void main()
{
    float x,term=1,exp;
    int n,i,fact;
    printf("Enter the value x:\n");
    scanf("%f",&x);
    printf("x=%f\n",x);
    n=100;
    exp=1;
 for(i=1;i<=n;i++)
    {
        term=term*x/i;
        exp=exp+term;
    }
    printf("exp(%2.10f)=%2.10f\n",x,exp);
}
