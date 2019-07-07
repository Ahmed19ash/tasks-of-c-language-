#include <stdio.h>
#include <stdlib.h>

int x,y=1;

void fun1(){
while(y<=0.5*x){

 printf("%i\n",y);
y++;
}
printf("%i\n",x);
}
void fun2(){
    while(y>x*0.5&y<x){

 printf("%i\n",y);
y++;
}
printf("%i\n",2*x);
}

int main()
{
printf("please enter your number\n");
scanf("%i",&x);

 fun1();

 fun2();

}
