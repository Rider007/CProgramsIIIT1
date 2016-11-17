#include<stdio.h>

void main()
{
    int x[9]={1,2,3,4,5,6,7,8,9};
    int i=0,j=0;
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        printf("\t\t%d X %d = %d\n",*(x+i),*(x+j),(*(x+i)**(x+j)));
        printf("\n\n");
    }
}
