#include<stdio.h>

typedef struct{
  int Japanese;
  int Math;
  int Society;
  float ave;
}exam;

int main(){
  exam a;
  a.Japanese = 50;
  a.Math = 70;
  a.Society = 80;
  a.ave = (a.Japanese + a.Math + a.Society) / 3.0;
  printf("国語の点数： %3d \n",a.Japanese);
  printf("数学の点数： %3d \n",a.Math);
  printf("社会の点数： %3d \n",a.Society);
  printf("平均点　　： %5.1f \n",a.ave);

}