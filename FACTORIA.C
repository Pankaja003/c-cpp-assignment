#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,fact=1;
clrscr();
printf("Enter the number:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("%d",fact);
getch();
return 0;
}