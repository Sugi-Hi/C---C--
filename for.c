#include<stdio.h>

void main(){
  int i;
  int sum=0; 
  float ave;
  for(i=0;i<10;i++){
    printf("%d  ",i);
    sum += i;
  }
  ave = (float)sum /10.0;
  printf("⇒合計値：%d ,平均値：%2.2f \n",sum,ave);
}