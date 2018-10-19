#include <stdio.h>
#include <stdlib.h>

int main()
{
int y,m,d;
scanf("%d%d%d",&y,&m,&d);
if(m==2)
{
if(y%4==0&&y%100!=0||y%400==0)
{
   if(d<=29)
        printf("yes1");
   else
        printf("no2");
}
else
{
    if(d<=28)
        printf("yes3");
    else
        printf("no4");
}
}
else
{
if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
{
    if(d<=31)
        printf("yes5");
    else
        printf("no6");
}
else if(m==4||m==6||m==9||m==11)
{
    if(d<=30)
        printf("yes7");
    else
        printf("no8");
        }
else
    printf("no9");
}
    return 0;
}
