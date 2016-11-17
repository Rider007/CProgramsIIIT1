#include<stdio.h>

void main()
{
    int n,i,temp;

    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter  the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n/2;i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    printf("The reversed array:\n ");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
