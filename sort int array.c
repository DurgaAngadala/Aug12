/*Write a C program to sort an int array using pointers. [ increasing order / decreasing order] */

#include <stdio.h>
void sort(int n, int* ptr)
{
    int i, j, t;
    for (i = 0; i < n; i++) {
  
        for (j = i + 1; j < n; j++) {
  
            if (*(ptr + j) < *(ptr + i)) {
  
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
   for (i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
}
  

int main()
{
    int n = 5;
    int arr[] = { 95,64,100,22,4};
  
    sort(n, arr);
  
    return 0;
}

OUTPUT:
4 22 64 95 100 