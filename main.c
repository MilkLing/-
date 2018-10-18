#include<stdio.h>
int main()
{
int g;
scanf("%d",&g);
if(g>=0&&g<60)
    printf("fail");
else if(g>=60&&g<=69)
printf("pass");
else if(g>=70&&g<=79)
printf("medium");
else if(g>=80&&g<=89)
printf("good");
else if(g>=90&&g<=100)
printf("excellent");
else
    printf("error");
return 0;
}
