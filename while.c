#include<stdio.h>

void main(){
  
  int x;
  printf("5の倍数の数字を入れて下さい!!\n");
  scanf("%d",&x);

  while(x%5!=0){
    printf("5の倍数の数字ではないです。再度入力して下さい!!\n");
    scanf("%d",&x);
  }
  printf("5の倍数の数字が入りました!\n");

}