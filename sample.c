#include<stdio.h>

void main(){

  int x,y;
  printf("Please input your additional number!\n");
  scanf("%d",&x);
  scanf("%d",&y);

  int add=x+y;
  printf("和：%d+%d=%d\n",x,y,add);

}