#include<stdio.h>

void main(){

  int x,y;
  printf("Please input your calculational number!\n");
  scanf("%d",&x);
  scanf("%d",&y);

  int add=x+y;
  int def=x-y;
  int mul=x*y;
  int rate=x/y;
  int rest=x%y;

  printf("和：%d+%d=%d\n",x,y,add);
  printf("差：%d-%d=%d\n",x,y,def);
  printf("和：%d*%d=%d\n",x,y,mul);
  printf("和：%d/%d=%d\n",x,y,rate);
  printf("残：%d:%d=%d\n",x,y,rest);

}