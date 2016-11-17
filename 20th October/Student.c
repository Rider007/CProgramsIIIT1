#include<stdio.h>
struct student
{
    int mark[6];
    int id;
    char name[30];
    struct
    {
        int rn;
        char locale[20];
    }add;
};
typedef struct student st;
st sn[10];
void main()
{
    int i=0,j=0;
    printf("Enter the details of each student");
    for(i=0;i<10;i++)
    {
        printf(" NAME: ");
        scanf("%s",sn[i].name);
        printf("\n ID: ");
        scanf("%d",&sn[i].id);
        printf("\n Room no.: ");
        scanf("%d",&sn[i].add.rn);
        printf("\n Locality: ");
        scanf("%s",sn[i].add.locale);
        for(j=0;j<6;j++)
        {
            printf("\n Marks %d: ",j+1);
            scanf("%d",&sn[i].mark[j]);
        }
    }
    printf("\n\nDATABASE\n\n");
    for(i=0;i<10;i++)
    {
        printf("STUDENT %d\n",i+1);
        printf(" NAME: ");
        puts(sn[i].name);
        printf("\n ID: ");
        printf("%d",sn[i].id);
        printf("\n Room no.: ");
        printf("%d",sn[i].add.rn);
        printf("\n Locality: ");
        puts(sn[i].add.locale);
        for(j=0;j<6;j++)
        {
            printf("\n Marks %d: ",j+1);
            printf("%d",sn[i].mark[j]);
        }
        printf("\t");
    }
}
