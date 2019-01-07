#include <stdio.h> 
  
void swap(int *x, int *y) 
{ 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
}  
void bubbleSort(int a[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
     
       for (j = 0; j < n-i-1; j++)  
           if (a[j] > a[j+1]) 
              swap(&a[j], &a[j+1]); 
} 
  
void printArray(int a[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", a[i]); 
    printf("n"); 
} 
int main() 
{ 
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; 
    int n = sizeof(a)/sizeof(a[0]); 
    bubbleSort(a, n); 
    printf("Sorted array: \n"); 
    printArray(a, n); 
    return 0; 
} 
