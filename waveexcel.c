#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){
  float t,y;
  FILE *fp;
  fp = fopen("wave.dat","w");
  if(fp==NULL){
    printf("We can't open wave.dat");
    exit(1);
  }
  for(t=0.0;t<1.0;t+=0.01){
    y = sin(2*M_PI*4*t);
    fprintf(fp,"%f\t%f\n",t,y);
  }
  fclose(fp);
  return 0;
}