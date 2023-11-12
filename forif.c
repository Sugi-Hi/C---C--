#include<stdio.h>

void main(){

  int i;
  printf("Please input your favorite number!\n");
  int input;
  scanf("%d",&input);

  for(i=1;i<=input;i++){

    if((i%3==0) && (i%5==0)){
      printf("FuzzBuzz\n");
    }
    else if(i%3==0){
      printf("Fuzz\n");
    }
    else if(i%5==0){
      printf("Buzz\n");
    }
    else{
      printf("%d\n",i);
    }

  }
}