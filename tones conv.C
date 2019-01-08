#include<Stdio.h>
#include<conio.h>
int main()
{
float t,mt,kg,hg,dg,g,decig,cg,mg;
clrscr();
printf("enter a number in tones:");
scanf("%f",&t);
mt=t*0.907185;
printf("metric ton is %f\n",mt);
kg=t*907.3;
printf("kilogram is %f\n",kg);
hg=t*9071.847;
printf("hectogram is %f\n",hg);
dg=t*90718.474;
printf("decagram is %f\n",dg);
g=t*907184.74;
printf("garam is %f\n",g);
decig=t*9071847.4;
printf("decigram is %f\n",decig);
cg=t*90718474;
printf("centigram is %f\n",cg);
mg=t*907184740;
printf("miligram is %f\n",mg);
getch();
return 0;
}

