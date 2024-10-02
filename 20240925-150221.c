//Program to Calculate simple intrest
#include<stdio.h> 
int main(){
float p,r,t,si;// p=principal,r=rate,t=time,si=simple interest;
    printf("enter principle\n ");
    scanf("%f",&p);
    printf("enter rate of interst\n ");
    scanf("%f",&r);
    printf("enter time\n");
    scanf("%f",&t); 
    si=(p*r*t)/100;
    printf("simple interest=%f",si);
    return 0;
    }