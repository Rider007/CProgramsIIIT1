#include<stdio.h>

void main()
{
    FILE *fp;
    fp=fopen("Student.txt","w");
    //fprintf(fp,"ID\tNAMES\t\tM1\tM2\tM3\tM4\tM5\n\n");
    int id[2],mark[5];
    char name[100];
    int i=0,j=0;
    printf("Enter the id,names,marks\n");
    int val=1;
    for(i=0;i<2;i++)
    {
        fprintf(fp,"%d\t",val);
        fscanf(stdin,"%d",&id[i]);
        fprintf(fp,"%d\t",id[i]);
        fscanf(stdin,"%s",name);
        fprintf(fp,"%s\t",name);
        for(j=0;j<5;j++)
        {
            fscanf(stdin,"%d",&mark[i]);
            fprintf(fp,"\t%d\n",mark[i]);
        }

    }
    fclose(fp);
   fp=fopen("Student.txt","r");
   printf("\n\n-----------------------------\n\n");
    for(i=0;i<2;i++)
    {
        fscanf(fp,"%d\t",&val);
        fprintf(stdout,"\n%d\t",val);
        fscanf(fp,"%d",&id[i]);
        fprintf(stdout,"%d\t",id[i]);
        fscanf(fp,"%s",name);
        fprintf(stdout,"%s\t",name);
        for(j=0;j<5;j++)
        {
            fscanf(fp,"%d",&mark[i]);
            fprintf(stdout,"\t%d",mark[i]);
        }

    }
    fclose(fp);
}
