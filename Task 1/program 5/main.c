#include <stdio.h>
#include <stdlib.h>
int x;

void MachineisON      (){printf("Machine is ON\n");}
void MachineisOFF     (){printf("Machine is OFF\n");}
void MachineisWorking (){printf("Machine is Working\n");}
void RobotisMoving    (){printf("Robot is Moving\n");}
void RobotStopped      (){printf("Robot Stopped\n");}
void ConnectionError   (){printf("Connection Error\n");}
void ConnectionReturned(){printf("Connection Returned\n");}
void PowerLow          (){printf("Power Low\n");}
void PowerChanging     (){printf("Power Changing\n");}



void ALLfunctions (){

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

int main()
{
ALLfunctions();
   }
