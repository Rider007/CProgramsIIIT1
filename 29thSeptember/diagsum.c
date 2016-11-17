#include<stdio.h>

void main()
{
    int n,m,i,j,b=0;
    printf("Enter the rows and columns of the array:\n");
    scanf("%d%d",&n,&m);
    printf("Enter the elements of the array:\n");
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j)
            b=b+a[i][j];
        }
    }
    printf("The sum is : %d",b);
}

