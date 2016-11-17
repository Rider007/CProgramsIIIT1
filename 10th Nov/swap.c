#include<stdio.h>
void swap(int,int);
void main()
{
    int x=10,y=10;
    printf("x=%d y=%d",x,y);
    swap(x,y);
    printf("x=%d y=%d",x,y);
}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
