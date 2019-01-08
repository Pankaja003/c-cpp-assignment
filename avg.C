#include<stdio.h>
#include<conio.h>
int main()
{
float w1,w2;
float p,q;
float result;
clrscr();
printf("weight of item1:");
scanf("%f",&w1);
printf("No of item1:");
scanf("%f",&p);
printf("weight of item2:");
scanf("%f",&w2);
printf("No of item2:");
scanf("%f",&q);
result=((w1*p)+(w2*q))/(p+q);
printf("avrage is=%f\n",result);
getch();
return 0;
}