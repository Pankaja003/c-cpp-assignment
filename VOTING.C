#include<stdio.h>
#include<conio.h>
int main()
{
int i,n,a[10];
clrscr();
printf("Enter the total no person:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
printf("person age are %d\n",a[i]);
if(a[i]<18)
{
printf("Persons are teen age\n");
a[i]++;
}
else
{
printf("Persons are Senior citizens\n");
printf("Eligible candidate for voting are\n");
 }
 }
getch();
return 0;
}