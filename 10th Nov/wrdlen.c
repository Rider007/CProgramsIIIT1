#include<stdio.h>

void main()
{
    double x[3]={1.0,2.0,3.0};
    double *p1,*p2;
    int i,j;
    p1=x;
    p2=x+1;
    printf("%u %u\n\n",p1,p2);
    i=p1;
    j=p2;
    if(j-i)
        printf("The word length: %u",j-i);
}
