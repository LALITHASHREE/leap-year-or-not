#include<stdio.h>
#include<conio.h>
void main()
{
int leap;
clrscr();
printf("enter the value of leap");
scanf("%d",&leap);
if(leap%4==0)
{
printf("the given year is a leap year");
}
elseif(leap%4==1)
{
printf("the given year is not a leap year");
}
return0;
}
