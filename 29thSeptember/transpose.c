#include<stdio.h>

void main()
{
    int n,m,i,j,k,l;
    printf("Enter the rows and columns of the array\n");
    scanf("%d%d",&n,&m);
    printf("Enter the elements of the array\n");
    int a[n][m];
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        scanf("%d",&a[i][j]);

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            k=a[i][j];
            l=a[j][i];
            a[j][i]=k;
            a[i][j]=l;
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            printf("%d",a[i][j]);
        printf("\n");
    }

}
