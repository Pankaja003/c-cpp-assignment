
#include<stdio.h> 
  
void func()
{
    printf("hello");
}

int main(void)
{  clrscr();
    printf("address of function main() is :%p\n", main);
    printf("address of function func() is : %p\n", func);
    getch();
    return 0;
}

