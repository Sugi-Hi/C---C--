#include<stdio.h>
#include<math.h>


void main(){
  int i;
  float pi = 3.14;
  float x,y,rad;
  
  for(i=0;i<=360;i++){
    rad = pi*(i/180.0);
    x = cos(rad);
    y = sin(rad);
    printf("角度：%d° rad表記:%1.7f sin値:%1.3f cos値:%1.3f\n",i,rad,y,x);  
    }

}