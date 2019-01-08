#include<stdio.h>
#include<conio.h>
int main()
{
int hour;
char id[10];
float amt,salary;
clrscr();
printf("enter the employee id:");
scanf("%s",&id);
printf("enter the working hours");
scanf("%d",&hour);
printf("amount given per hour:");
scanf("%f",amt);
salary=amt*hour;
printf("employee id is= %s\n",id);
printf("salary is=$ %f\n",salary);
getch();
return 0;
}