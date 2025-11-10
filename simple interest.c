#include<stdio.h>
int main(){
float p,t,r,si;
printf("enter principal,time and rate:");
scanf("%f %f %f",&p,&t,&r);
si=(p*t*r)/100;
printf("simple interest=%.2f\n",si);
return 0;
}
