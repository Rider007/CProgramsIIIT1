#include<stdio.h>

void main()
{
    int c=0,i=0;
    char str[100];
    printf("Enter the string\n");
    scanf("%s",str);
    while(1)
    {
        if(str[i]=='\0')
        break;
        else
        {
        c++;
        i++;

        }
    }
    printf("Length: %d",c);
}
