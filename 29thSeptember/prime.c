#include <stdio.h>

int prime(int);

void main()
{
    int i;
    printf("The prime number between 1 to 2000");
    for(i=1;i<=2000;i++)
    {
        if(prime(i))
            printf("%d \n",i);
    }
}
int prime(int num)
{
    int i,c=0;
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
            c++;
    }
    if(c==2)
        return 1;
    else
        return 0;
}
