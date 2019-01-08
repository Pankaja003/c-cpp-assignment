#include<stdio.h>
#include(conio.h>
int main()
{
int days=365;
int years;
int weeks;
clrscr();
years=days/365;
printf("years: %d\n",years);
weeks=(days % 365)/7;
printf("weeks: %d\n",weeks);
days=days-((years*365)+(weeks*7));
printf("days: %d\n",days);
getch();
return 0;
}
