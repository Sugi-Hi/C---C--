#define PI 3.14
#include<stdio.h>

void main(){
  float meter;
  printf("Please input diameter in a circle\n");
  scanf("%f",&meter);

  float circu = meter * PI;
  float area = (meter/2) * (meter/2) * PI;

  printf("円周：%5.3f\n",circu);
  printf("面積：%5.3f\n",area);

}