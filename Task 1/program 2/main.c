#include <stdio.h>
#include <stdlib.h>
int x,y,z ;
int c;
int main()
{
    printf("please enter first number\n");
     scanf("%i",&x);

    printf("please enter second number\n");
     scanf("%i",&y);

    for(z=1;z<=x;z++){
    c = z%y;

    if (c==0){printf("  \n");}

    else {printf("%i\n",z);}


    }


}
