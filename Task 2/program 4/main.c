#include <stdio.h>
#include <stdlib.h>
int power(int *x);
int main()
{
    int a;
    printf("please enter your number\t");
    scanf("%i",&a);
  int x = power(&a);
   printf("power of number = %i",x);
}


int power(int *x){

return (*x)*(*x);
}
