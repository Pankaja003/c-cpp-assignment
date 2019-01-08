#include<stdio.h>
void main()
{
  int n,i,d2,d1,d3,d4,d5,d6;
  int sum=0,n1=0,n2=0;
  printf("Enter the number should be divided ");
  scanf("%d",&n);
  printf("Enter the number that divides the given number in the range of (2-11)");
  scanf("%d",&i);
  switch(i)
  {
  case 2:if((n%10)%2==0)
  printf("n divisible by 2");
  else
  printf("not divisible by 2");
  break;
  case 3:while(n!=0)
  {
     sum=sum+(n%10);
     n=n/10;
  }
  if(sum%3==0)
  printf("n is divisible by 3");
  else
  printf("n is not divisible by 3");
  break;
  case 4:
  d2=n%100;
    n1=n1+(d2%10);
  n2=(d2-n1)*2;
  if((n1+n2)%4==0)
  printf("n divisible by 4");
  else
  printf("n is not a divisible by 4");
  break;
  case 5:if((n%10)%5==0)
  printf("n divisible by 5");
  else
  printf("n is not divisible by 5");
  break;
  case 6: d4=n%10;
   while(n!=0)
  {
     sum=sum+(n%10);
     n=n/10;
  }
  if(((sum%3)==0) &&(d4%2==0))
  printf("n is divisible by 6");
  else
  printf("n is not divisible by 6");
  break;
  case 7:
  d1=n%10;
  d3=n/10;
  sum= d1+(3*d3);
  if(sum%7==0)
  printf("n is divisible by 7");
  else
  printf("n is not divisible by 7");
  break;
  case 8:  d1=n%10;
  d3=n/10;
  sum= d1+(2*d3);
  if(sum%7==0)
  printf("n is divisible by 8");
  else
  printf("n is not divisible by 8");
  break;
  case 9: while(n!=0)
  {
     sum=sum+(n%10);
     n=n/10;
  }
  if(sum%9==0)
  printf("n is divisible by 9");
  else
  printf("n is not divisible by 9");
  break;
  case 10:if((n%10)==0)
  printf(" n is divisible by 10");
  else
  printf("n is not divisible by 10");
  break;
  case 11:d5=n%100;
  d6=n/100;
  sum=d5+d6;
  if(sum%11==0)
  printf("n is divisible by 11");
  else
  printf("n is not divisible by 11");
  break;
  }
  getch();
  }


