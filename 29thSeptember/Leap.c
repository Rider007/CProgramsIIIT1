#include <stdio.h>
int leap(int);
void main()
{
    int i;
    printf("The Leap years are:");
    for(i=1;i<=2000;i++)
    {
         if(leap(i))
        printf("%d \n",i);
    }
}
int leap(int year)
{
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
                return 1;
            else
                return 0;
        }
        return 1;
    }
    else
        return 0;
}
