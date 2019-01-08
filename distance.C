
#include<stdio.h>
#include<conio.h>
struct distance
{
int feet;
float inch;
}d1,d2,sod;
int main()

{
clrscr();
printf("Enter information for 1st distance\n");
printf("Enter the feet:");
scanf("%d",&d1.feet);
printf("Enter the inch:");
scanf("%f",&d1.inch);
printf("Enter information of 2nd distance\n");
printf("Enter the feet:");
scanf("%d",&d2.feet);
printf("Enter the inch:");
scanf("%f",&d2.inch);
sod.feet=d1.feet+d2.feet;
sod.inch=d1.inch+d2.inch;
if(sod.inch>12.0)
{
sod.inch=sod.inch-12.0;
++sod.feet;
}
printf("\n sum of distance =%d\'-%0.1f\n'",sod.feet,sod.inch);
getch();
return 0;
}
