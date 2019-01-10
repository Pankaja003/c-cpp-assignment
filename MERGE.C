#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
   FILE *fp1 = fopen("pqr.txt", "r");
   FILE *fp2 = fopen("aq.txt", "r");

   FILE *fp3 = fopen("f3.txt", "w");
   char c;
   clrscr();

   if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
   {
	 puts("Could not open files");
	 exit(0);
   }

   while ((c = fgetc(fp1)) != EOF)
      fputc(c, fp3);


   while ((c = fgetc(fp2)) != EOF)
      fputc(c, fp3);

   printf("Merged pqr.txt and aq.txt into f3.txt");

   fclose(fp1);
   fclose(fp2);
   fclose(fp3);
   getch();
   return 0;
}
