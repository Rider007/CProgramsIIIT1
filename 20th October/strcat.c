#include<stdio.h>
int len(char ar[]);
void concat(char ar[],char ar1[],int l1,int l2);
void main()
{
    char wrd1[100],wrd2[100];
    printf("Enter the two strings\n");
    scanf("%s",wrd1);
    scanf("%s",wrd2);
    int l1=len(wrd1),l2=len(wrd2),i=0;
    concat(wrd1[],wrd2[],l1,l2);
}

int len(char ch[])
{
    int i=0;
    while(ch[i]!='\0')
    {
        i++;
    }
    return i;
}

void concat(char ch[],char ch1[],int len,int l2)
{
    while (ch)
}
