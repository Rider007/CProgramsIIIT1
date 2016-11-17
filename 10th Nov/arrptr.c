#include<stdio.h>

void main()
{
    int x[5]={1,2,3,4,5};
    int i=0,s=0;
    for(i=0;i<5;i++)
    {
        s=s+*(x+i);
    }
    printf("%d",s);
}
