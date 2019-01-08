
#include<stdio.h>
#include<conio.h>
struct Student
{
    int rollno,sub1,sub2,total;
    char name[10],sub[10];
    float avg ;
}s[10] ;
void main()
{
    int i, n ;
    clrscr() ;
    printf("Enter the number of students\n");
    scanf("%d", &n) ;
    for(i=0;i<n;i++)
    {
	printf("Enter the roll number\n");
	scanf("%d", &s[i].rollno) ;
	printf("Enter the name\n") ;
	scanf("%s", &s[i].name) ;
	printf("Enter the marks in sub1\n");
	scanf("%d",&s[i].sub1);
	printf("Enter the marks in sub2\n");
	scanf("%d",&s[i].sub2);
	s[i].total= s[i].sub1+s[i].sub2 ;
	s[i].avg = s[i].total/2;
    }
    printf("\nRoll No\tname\tSub1\tSub2\tTotal\tAverage\n\n");
    for(i=0;i<n;i++)
    {
	printf("\n%d\t%s\t%d\t%d\t%d\t%0.2f\n",s[i].rollno,s[i].name,s[i].sub1,s[i].sub2,s[i].total,s[i].avg);
    }
    getch() ;
}
