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

  int x,y;
  printf("・九九の計算\n");
  for(x=1;x<10;x++){
    printf("対象:%d ⇒",x);

    for(y=1;y<10;y++){
      printf("%d ",x*y);
    }

    printf("\n");
  }
}