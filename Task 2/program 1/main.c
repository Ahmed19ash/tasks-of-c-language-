#include <stdio.h>
#include <stdlib.h>

int reminder(int *,int *);

int main()
{
int a,b;
printf("please enter first number\n");
scanf("%i",&a);
printf("please enter second number\n");
scanf("%i",&b);
 reminder(&a,&b);

}
int reminder(int *x,int *y){
for(int i=1; i<= *x;i++){

    if (((i)%(*y))==0){

     printf("    \n");
    }
 else {
    printf("z=%i\n",i);
}
}
}
