#include<stdio.h>
int checkd(char d[]);
int checkt(char t[]);
void set();
int check_vald(int,int,int);
int check_valt(int,int,int);
struct d_t
{
    int dd;
    int mm;
    int yy;
    int hr;
    int min;
    int sec;
};
struct d_t dt1,dt2;
void main()
{
    int r;
    char date[20],time[20];

    while(1)
    {
        printf("Enter the date in dd:mm:yyyy format");
        scanf("%s",date);
        r=checkd(date);
        if(r!=0)
        printf("Date is not in correct format");
        else
            break;
    }
    while(1)
    {
        printf("Enter time in hh:mm:ss");
        scanf("%s",time);
        r=checkt(time);
        if(r!=0)
            printf("Data is not in right format");
        else
            break;
    }

    set(date,time);
   r=check_vald(dd,mm,yy);
   r=check_valt(hr,min,sec);
}

int checkd(char d[])
{
    int c=0,i=0,j=0;
    while(d[c]!='\0')
    {
        c++;
    }
    if(c!=10)
        return 1;
    else
    {
     for(i=0;i<c;i++)
      {
         if(i==2 || i==5)
         {
             if(d[i]!=':')
                return 1;
             else
             j++;
         }
         if(d[i]>'0' && d[i]<'9')
            j++;
         else
            return 1;
      }
      j++;
    }

    if(j!=3)
        return 1;
    else
        return 0;
}

int checkt(char t[])
{
    int c=0,i=0,j=0;
    while(t[c]!='\0')
    {
        c++;
    }
    if(c!=8)
        return 1;
    else
    {
     for(i=0;i<c;i++)
      {
         if(i==2 || i==5)
         {
             if(d[i]!=':')
                return 1;
             else
             j++;
         }
         if(d[i]>'0' && d[i]<'9')
            j++;
         else
            return 1;
      }
      j++;
    }
    if(j!=3)
        return 1;
    else
        return 0;
}

void set(char d,char t)
{
    dt1.dd=(d[0]-'0')*10+(d[1]-'0');
    dt1.mm=(d[3]-'0')*10+(d[4]-'0');
    dt1.yy=(d[6]-'0')*1000+(d[7]-'0')*100+(d[8]-'0')*10+(d[9]-'0');
    dt1.hr=(t[0]-'0')*10+(t[1]-'0');
    dt1.min=(t[3]-'0')*10+(t[4]-'0');
    dt1.sec=(t[6]-'0')*10+(t[7]-'0');
}

int check_vald(int d,int m,int y)
{
    if(y%4==0)
        {
            if(y%100==0)
            {
                if(y%400==0)
                    d=d+1;
            }
            else
                d=d+1;
        }
    if(m>12 || m<1)
        return 1;
    else if(d>31 || d<1)
        return 1;
    else
    {

    }
}
