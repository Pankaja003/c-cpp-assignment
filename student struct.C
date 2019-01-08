#include<stdio.h>
#include<conio.h>
struct student
{
int rollno;
char name[10];
int age;
}s[10];

int main()
{
int i,n;
getch();
printf("\n stdent information\n");
printf("Enter no of students:\n");
scanf("%d",n);
for(i=0;i<5;i++)
{
printf("Enter the name:\n");
scanf("%s",&s[i].name);
printf("Enter the rollno:\n");
scanf("%d",&s[i].rollno);
printf("Enter the age:\n");
scanf("%d",&s[i].age);
}
printf("\nname\trollno\tage\t\n\n");
for(i=0;i<5;i++)
{
 printf("\n%s\t%d\t%d\t\n\n",s[i].name,s[i].rollno,s[i].age);

 }
 

 getch();
 return 0;
 }
