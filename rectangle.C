#include<stdio.h>
#include<conio.h>
int main()
{
int area;
int perimeter;
int h=9;
int w=6;
clrscr();
perimeter=2*(h+w);
printf("perimeter of the rectangle=%d inches\n",perimeter);
area=h*w;
printf("area of the rectangle=%d inches\n",area);
getch();
return 0;
}
