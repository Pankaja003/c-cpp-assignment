#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp1, *fp2;
    char filename[40];
    char ch;
    int delete_line, temp = 1;
 
    printf("Enter file name: ");
    scanf("%s", filename);
    fp1 = fopen("abcd.txt", "r");
    ch = getc(fp1);
      while (ch != EOF)
    {
        printf("%c", ch);
        ch = getc(fp1);
    }
    rewind(fp1);
    printf(" \n Enter line number of the line to be deleted:");
    scanf("%d", &delete_line);
    fp2 = fopen("adc.c", "w");
    ch = getc(fp1);
    while (ch != EOF)
    {
        ch = getc(fp1);
        if (ch == '\n')
            temp++;
            if (temp != delete_line)
            {
                putc(ch, fp2);
            }
    }
    fclose(fp1);
    fclose(fp2);
    remove(filename);
    rename("adc.c", filename);
    printf("\n The contents of file after being modified are as follows:\n");
    fp1 = fopen(filename, "r");
    ch = getc(fp1);
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = getc(fp1);
    }
    fclose(fp1);
    return 0;
}
