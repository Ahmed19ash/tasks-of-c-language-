#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int x;
int y=1;
int z;
int main()
{
   printf("please enter your number\n");

   scanf("%i",&x);
   z=x;
   while(y<=6){


   printf("%i\n",x);
   x=x*z;
    //printf("%f\n",pow(x,y)); // this for power
    y++;

   }



}
