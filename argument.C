

#include<stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	clrscr();
	for (i = 0; i < argc; i++)
		printf("\n%s", argv[i]);
		getch();
	return 0;
}

