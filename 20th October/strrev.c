#include <stdio.h>
int len(char ar[]);
void main()
{
    char ar[100];
    printf("Enter The string\n");
    scanf("%s",ar);
    char temp=' ';
    int l=len(ar),i=0;
    for(i=0;i<l/2;i++)
    {
        temp=ar[i];
        ar[i]=ar[l-1-i];
        ar[l-1-i]=temp;
    }
    puts(ar);
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
