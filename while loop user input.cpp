// program for while loop user input
/*
Author: Byron 
Reg no:CT101/G/22150/24
Date:10/10/24
*/
#include<stdio.h>
int main(){
   int i,start,sum=0,stop;
    

   printf("enter a value for when to start\n");
   scanf("%d",&start);
   
   printf("enter a value for when to stop\n");
   scanf("%d",&stop);
   i=start;
   while(i<=stop)
   {
    printf("%d\n",i);
    i++ ;
    sum=sum+i;
    
    }
  printf("the sum is %d",sum); 
  return 0;
  }