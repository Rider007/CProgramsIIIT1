#include <stdio.h>

void main()
{
    int x[3][5]={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
    int s=0,i=0,j=0;
    int **p;
    p=x;
  //printf("%u\n",&x[0][0]);
    printf("%u\n", &i);
       /* for(i=0;i<3;i++)
        {
            for(j=0;j<5;j++)
                s=s+*(*(x+i)+j);
    }
        printf("%d",s);*/
}
