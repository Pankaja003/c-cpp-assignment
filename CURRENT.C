#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
   int cid, c1;
   float chg, surchg=0, gramt,netamt;
   char cname[25];
   clrscr();

   printf("enter Customer ID :");
   scanf("%d",&cid);
   printf("enter the name of the customer :");
   scanf("%s",cname);
   printf("enter the unit consumed by the customer : ");
   scanf("%d",&c1);
   if (c1 <200 )
	chg = 1.20;
   else	if (c1>=200 && c1<400)
		chg = 1.50;
	else if (c1>=400 && c1<600)
	chg = 1.80;
		else
			chg = 2.00;
   gramt = c1*chg;
   if (gramt>300)
	surchg = gramt*15/100.0;
   netamt = gramt+surchg;
   if (netamt  < 100)
	netamt =100;
   printf("\nElectricity Bill\n");
   printf("Customer IDNO  :%d\n",cid);
   printf("Customer Name   :%s\n",cname);
   printf("unit Consumed   :%d\n",c1);
   printf("Amount Charges per unit :%8.2f\n",chg,gramt);
   printf("Surchage Amount    :%8.2f\n",surchg);
   printf("Net Amount Paid By the Customer :%8.2f\n",netamt);
   getch();

}

