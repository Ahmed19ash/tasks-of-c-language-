#include <stdio.h>
#include <stdlib.h>
#define add(x,y) (x+y);
#define sub(x,y) (x-y);
#define mul(x,y) (x*y);
int addtion(int x,int y);
int subt(int x,int y);
int multi(int x,int y);

int main()
{

 printf("add=%i\n",addtion(5,4));
  printf("sub=%i\n",subt(5,4));
  printf("mul=%i\n",multi(5,4));

}
int addtion(int x,int y){
return add(x,y);
}
int subt(int x,int y){
return sub(x,y);
}
int multi(int x,int y){
return mul(x,y);
}
