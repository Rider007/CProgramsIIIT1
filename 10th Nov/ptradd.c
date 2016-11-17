#include<stdio.h>

void main()
{
    int x[5]={1,2,3,4,5};
    int y[5]={1,2,3,4,5};
    int i=0;
    for(i=0;i<5;i++)
    {
        printf("%d\n",*(y+i)+(*x+i));
    }
}
