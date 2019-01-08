
#include<stdio.h>
#include<math.h>
int factorial(int num);
int main()
{
int n,r;
float nCr;
clrscr();
printf("Enter the value of n:\n");
scanf("%d",&n);
printf("Enter the value of r:\n");
scanf("%d",&r);
if(n>=r&&n>0&&r>0)
{
nCr=(float)factorial(n)/(factorial(r)*factorial(n-r));
printf("Value of %d to %d=%f\n",n,r,nCr);
}
else
{
printf("Invalid entry\n");
}
getch();
return 0;
}
int factorial(int num)
{
int i,n,fact=1;
for(i=1;i<=n;i++)
{
fact=fact*i;
}
return (fact);
}
