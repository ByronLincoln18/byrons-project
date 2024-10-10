// program for loop user input 
/*
Author: Byron 
Date:10/10/24
*/
#include<stdio.h>

int main(){
   int i,start,sum=0,stop;
    printf("enter a value for when to start");
    scanf("%d",&start);
    
    printf(" enter a value for when to stop");
    scanf("%d",&stop);
    
  for(i=start;i<stop;i++)
  {
  printf("%d\n",i);
  sum=sum+start;
  }
  printf("the sum is %d",sum); 
  return 0;
  }