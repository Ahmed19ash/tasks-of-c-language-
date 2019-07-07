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
/////////////////////
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
/////////////////////////

