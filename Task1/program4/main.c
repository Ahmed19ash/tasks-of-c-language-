#include <stdio.h>
#include <stdlib.h>

int x,y=1;
int main()
{
printf("please enter your number\n");
scanf("%i",&x);

while(y<=0.5*x){

 printf("%i\n",y);
y++;
}
printf("%i\n",x);
//y=x+1;
while(y>x*0.5&y<x){

 printf("%i\n",y);
y++;
}
printf("%i\n",2*x);

}
