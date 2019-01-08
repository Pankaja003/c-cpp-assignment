#include <stdio.h>
#include <math.h>
 
void main()
{
    int n,s=0,r=0,cube=0,temp;
    clrscr();

    printf ("enter a number");
    scanf("%d", &n);
    temp=n;
    while (n!= 0)
    {
	r=n % 10;
	cube = pow(r,3);
	s= s+cube;
	n = n/10;
    }
    if (s==temp)
	printf ("The given no is armstrong no");
    else
	printf ("The given no is not a armstrong no");
	getch();
}
