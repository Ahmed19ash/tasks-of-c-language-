#include <stdio.h>
#include <stdlib.h>
int calc(int *,int *);
int  add(int *,int *);
int  sub(int *,int *);
int  mul(int *,int *);
int  tic(int *);

int main()
{
int user;
int a,b,result;

printf("please enter 1 for calculator or 2 for tickets\t");
scanf("%i",&user);

if (user ==1){
printf("please enter first number\t");
scanf("%i",&a);
printf("please enter second number\t");
scanf("%i",&b);

result = calc(&a,&b);
printf("result = %i\n",result);
}

if (user==2){
int opot;
printf("please enter your option\t");
scanf("%i",&opot);
tic(&opot);
}
}
//////////////////////////
int calc(int *x,int *y){
int op;
printf("please enter your operation\n1 for add\n2 for sub\n3 for multi \n");
scanf("%i",&op);

if (op==1){
return *x + *y;
}
if (op==2){
return *x - *y;
}
if (op==3){
return *x * *y;
}
}
///////////////////////////////////////////
int tic(int *k){

if (*k==1){
    return printf("normal ticket 50 LE \n");
}
if (*k==2){
    return printf("vip ticket \n");
}
if (*k==3){
    return printf("vip + pop corn \n");
}

}
