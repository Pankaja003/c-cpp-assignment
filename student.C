#include<stdio.h>
#include<conio.h>
struct student
{
  int rollno;
  char name[20];
  int age;
  int marks;
  }
  int main()
  {
   struct student *Ptr, p1;
    clrscr();
    Ptr = &p1;

    printf("Enter name:");
    scanf("%s", &perPtr->name);

    printf("Enter roll no:");
    scanf("%d", &perPtr->rollno);

  printf("Enter age:");
    scanf("%d", &perPtr->age);

    printf("Enter marks:");
    scanf("%d", &perPtr->marks);
    printf("Displaying:\n");
    printf("name: %s\n", perPtr->name);
    printf("roll no: %d\n", perPtr->rollno);
    printf("Age: %d\n", perPtr->age);
    printf("marks: %d\n", perPtr->marks);
    getch();

    return 0;
}
