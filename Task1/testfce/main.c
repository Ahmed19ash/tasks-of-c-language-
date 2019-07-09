#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y;
    scanf("%f %f",&x,&y);
if (x==1){
    x=4.00;
    printf("tot%.2f",x*y);
}

else if (x==2){
    x=4.50;
    printf("tot%5f",x*y);
}

else if (x==3){
    x=5.00;
    printf("tot%.2f",x*y);
}
else if (x==4){
    x=2.00;
    printf("tot%.2f",x*y);
}
else {
    x=1.50;
    printf("tot%.2f",x*y);
}

}
