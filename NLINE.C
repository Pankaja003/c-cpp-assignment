#include <stdio.h>
#include<conio.h>

int main()
{
    FILE *fp1;
    int c_lines = 0;
    char filechar[40], c;
    clrscr();

    printf("Enter file name: ");
    scanf("%s", filechar);
    fp1 = fopen(filechar, "r");
    c = getc(fp1);
    while (c != EOF)
    {

	if (c == 'n')
	{
	    c_lines = c_lines + 1;
	}

	c= getc(fp1);
    }
    fclose(fp1);
    printf("There are %d lines in %s  in a file\n", c_lines, filechar);
  getch();
   return 0;
}
