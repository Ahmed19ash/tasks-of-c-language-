#include "header.h"
#include "funname.h"
#include "functions.h"

int main()
{
int user;
int a,b,result;

printf("please enter\n1 for calculator\n2 for reminder\n3 for tickets\n");
scanf("%i",&user);

if (user ==1){
printf("please enter first number\t");
scanf("%i",&a);
printf("please enter second number\t");
scanf("%i",&b);

result = calc(&a,&b);
printf("result = %i\n",result);
}
////////////////
if (user==2){
printf("please enter first number\n");
scanf("%i",&a);
printf("please enter second number\n");
scanf("%i",&b);
 reminder(&a,&b);

}
////////////////////
if (user==3){
int opot;
printf("please enter your option\t");
scanf("%i",&opot);
tic(&opot);
}
}
//////////////////////////
