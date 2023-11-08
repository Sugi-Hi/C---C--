#include<stdio.h>

void main(){

  int i;
  printf("Please input your favorite number!\n");
  scanf("%d",&i);
  if(i == 1){
    printf("OK!\n");
  }
  else{
    printf("Try again!\n");
  }

}