#include<stdio.h>

void main()
{
    int n,i,h,l;
    printf("Enter the number of elements in the array:\n");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    h=a[0];
    l=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>h)
            h=a[i];
        if(a[i]<l)
            l=a[i];
    }
    printf("Highest Element: %d and Lowest element: %d",h,l);
}
