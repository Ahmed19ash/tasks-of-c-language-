#include <stdio.h>
#include <stdlib.h>
int userpick;

int x,y,z,c;

void MachineisON      (){printf("Machine is ON\n");}
void MachineisOFF     (){printf("Machine is OFF\n");}
void MachineisWorking (){printf("Machine is Working\n");}
void RobotisMoving    (){printf("Robot is Moving\n");}
void RobotStopped      (){printf("Robot Stopped\n");}
void ConnectionError   (){printf("Connection Error\n");}
void ConnectionReturned(){printf("Connection Returned\n");}
void PowerLow          (){printf("Power Low\n");}
void PowerChanging     (){printf("Power Changing\n");}
void riminder(){if (c==0){printf("  \n");}
                 else {printf("%i\n",z);}}
void clc(){
    printf("%i\n",x);
    x=x*z;
    //printf("%f\n",pow(x,y)); this for power
    }

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

//////////////////////////////////////////////////////
void Task1 (){

printf("please enter your condition\n");
scanf("%i",&x);

if (x==1){MachineisON      ();}

if (x==2){MachineisOFF     ();}

if (x==3){MachineisWorking ();}

if (x==4){RobotisMoving    ();}

if (x==5){RobotStopped      ();}

if (x==6){ConnectionError   ();}

if (x==8){ConnectionReturned();}

if (x==9){PowerLow          ();}

if (x==10){PowerChanging     ();}
}
////////////////////////////////

void Task2()
{

    printf("please enter first number\n");
     scanf("%i",&x);

    printf("please enter second number\n");
     scanf("%i",&y);

    for(z=1;z<=x;z++){
    c = z%y;

  riminder();

    }
}
//////////////////////////

void Task3(){
    y=1;
    printf("please enter your number\n");

   scanf("%i",&x);

    z=x;

   while(y<=6){

   clc();

    y++;

   }
}
/////////////////////////

void Task4(){
    y=1;
printf("please enter your number\n");
scanf("%i",&x);

 fun1();

 fun2();
}

////////////////////////////////////////////////////////

int main()
{

printf("please enter your number of Task\n");
scanf("%i",&userpick);

   if (userpick==1){
    Task1();
    }
   if (userpick==2){
    Task2();
    }
   if (userpick==3){
    Task3();
    }
    if (userpick==4){
    Task4();
    }
   }
