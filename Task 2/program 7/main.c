#include <stdio.h>
#include <stdlib.h>


void swap(int*, int*);

int main()
{
   int a, b;

   printf("Enter the value of a and b\n");
   scanf("%d%d",&a,&b);

   printf("Before Swapping\na = %d\nb = %d\n", a, b);

   swap(&a, &b);

   printf("After Swapping\na = %d\nb = %d\n", a, b);


}

void swap(int *x, int *y)
{
   int t;

   t  = *x;
   *x = *y;
   *y = t;
}
