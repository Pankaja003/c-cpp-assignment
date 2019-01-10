#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    FILE *fp;
    char ch;
    int charc = 0, sp = 0, tab = 0, line = 0;
    clrscr();
    fp = fopen("abcd.txt","r");
    if(fp == NULL)
    {
	printf("File Not Found\n");
	exit(1);
    }
    else
    {
	while(1)
	{
	    ch = fgetc(fp);
	    if(ch == EOF)
	    {
		break;
	    }
	    charc++;
	    if(ch == ' ')
		sp++;
	    else if(ch == '\t')
		tab++;
	    else if(ch == '\n')
		line++;
	}
    }
    fclose(fp);
    printf("\nNumber of Characters = %d\n", charc);
    printf("\nNumber of Tabs       = %d\n", tab);
    printf("\nNumber of New Lines  = %d\n", line);
    printf("\nNumber of Spaces     = %d\n", sp);
    getch();

}
