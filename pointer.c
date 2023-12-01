#include<stdio.h>

void main(){
  int *x;
  int y;
  x=&y;
  y=2;
  printf("x Value=%d\n",*x);
  printf("x Adress=%p\n",x);

  printf("y Value=%d\n",y);
  printf("y Adress=%p\n",&y);
}