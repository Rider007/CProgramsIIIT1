#include<stdio.h>

void main()
{
    int n1,m1,n2,m2,i=0,k=0,j=0;
    printf("Enter the row and column size of first array\n");
    scanf("%d%d",&n1,&m1);
    printf("Enter the row and column size of second array\n");
    scanf("%d%d",&n2,&m2);
    int a[n1][m1],b[n2][m2],c[n1][m2];
    if(m1!=n2)
        printf("The Two matrices can't be multiplied");
    else
    {
        printf("Enter the elements of the first array\n");
        for(i=0;i<n1;i++)
        {
            for(j=0;j<m1;j++)
            scanf("%d",&a[i][j]);
        }
        printf("Enter the elements of the second array\n");
        for(i=0;i<n2;i++)
        {
            for(j=0;j<m2;j++)
            scanf("%d",&b[i][j]);
        }
        for(i=0;i<n1;i++)
        {
            for(k=0;k<m2;k++)
            {
                c[i][k]=0;
            for(j=0;j<m1;j++)
                c[i][k]=c[i][k]+a[i][j]*b[j][k];
            }

        }
        for(i=0;i<n1;i++)
        {
            for(j=0;j<m2;j++)
                printf("%d",c[i][j]);
            printf("\n");
        }

    }
}
