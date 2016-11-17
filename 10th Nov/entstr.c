#include<stdio.h>
#include<string.h>
char *enterstr(void);
void main()
{
    char *s[2];
    printf("Enter the string");
    int i;
    for(i=0;i<2;i++)
    {
        s[i]=enterstr();
    printf("%s\n\n",s[i]);

    }

}

char *enterstr()
{
    int l;
    char *s,s1[50];
    scanf("%s",s1);
    l=strlen(s1);
    s=(char*)malloc(l+1);
    strcpy(s,s1);
    return s;
}
