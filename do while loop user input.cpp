// program to do while loop user input 
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
    
   do{
  
        printf("%d\n",start);
        start++;
        sum+=start;
  
  }
  while(start<=stop);
  printf("the sum is %d",sum); 
  return 0;
  }