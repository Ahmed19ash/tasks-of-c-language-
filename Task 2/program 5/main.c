#include <stdio.h>
#include <stdlib.h>
int draw(int *x);
int main()
{
int n;
printf("please enter number of column\n");
scanf("%i",&n);
draw(&n);
}

int draw(int *x){

for(int i=1;i<= (*x);i++){

for(int k=1;k<=i;k++){
    printf("*");
}
 printf("\n");
}
}
