#include<stdio.h>
void mystrcpy(char *,char *);
int main()
{
    char s2[]="BBSR";

    char s1[10];
    mystrcpy(s1,s2);
    printf("%s",s1);
}

void mystrcpy(char *s1,char *s2)
{
    do
    {
        *s1=*s2;
        s1++;
        s2++;
    }while(*s2!='\0');
    *s1='\0';
}
