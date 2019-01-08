#include <stdio.h>
#include<conio.h>

void main(){
    int n,i,ctr,p,q;
    clrscr();

    printf("enter the starting number of range: ");
    scanf("%d",&p);

    printf("enter the ending number of range : ");
    scanf("%d",&q);
    printf("The prime numbers between %d and %d are : \n",p,q);

    for(n=p;n<=q;n++)
       {
	 ctr = 0;

	 for(i=2;i<=n/2;i++)
	    {
	     if(n%i==0){
		 ctr++;
		 break;
	     }
	}

	 if(ctr==0 && n!= 1)
	     printf("%d ",n);
    }
printf("\n");
getch();
}
