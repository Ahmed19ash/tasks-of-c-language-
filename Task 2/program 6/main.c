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

for(int z=i;z<=*x-1;z++){
printf(" ");
}
for(int m=1;m<=i;m++){
printf("*");
}
for(int m=1;m<=i-1;m++){
printf("*");
}

 printf("\n");
}
}
