#include<stdio.h>
#include<conio.h>
int main()
{
int sec,h,m,s;
clrscr();
printf("enter the seconds:");
scanf(%d",&sec);
h=(sec/3600);
printf("hour is %d\n",h);
m=(sec-(3600*h))/60;
printf("month is %d\n",m);
s=(sec-(3600*h)-(m*60));
printf("seconds is  %d\n",s);
getch();
return 0;
}