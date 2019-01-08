#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100], i, n ;
    clrscr() ;
    printf("Enter the limit : ") ;
    scanf("%d", &n) ;
    printf("\nEnter the elements :\n\n") ;
    for(i = 0 ; i < n ; i++)
    scanf("%d", &a[i]) ;
    printf("\nThe negative elements are :\n\n") ;
    for(i = 0 ; i < n ; i++)
    {
        if(a[i]< 0)
        printf("%d\t", a[i]);
    }
    getch() ;
}
