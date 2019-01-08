#include<stdio.h>
#include<conio.h>
struct student
{
int rollno;
char name[10];
int age;
char add[50];
int marks;
}s[15];

int main()
{
int i,n;
getch();
printf("\n stdent information\n");
printf("Enter no of students:\n");
scanf("%d",n);
for(i=0;i<15;i++)
{
printf("Enter the name:\n");
scanf("%s",&s[i].name);
printf("Enter the rollno:\n");
scanf("%d",&s[i].rollno);
printf("Enter the age:\n");
scanf("%d",&s[i].age);
printf("Enter the address:\n");
scanf("%s",&s[i].add);
printf("Enter the marks:\n");
scanf("%d",&s[i].marks);
}
printf("\nname\trollno\tage\tadd\tmarks\t\n\n");
for(i=0;i<15;i++)
{
 printf("\n%s\t%d\t%d\t%s\t%d\t\n\n",s[i].name,s[i].rollno,s[i].age,s[i].add,s[i].marks);
 }

 getch();
 return 0;
 }
