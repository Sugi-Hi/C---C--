#include<stdio.h>
#include<stdlib.h>

int main(){
  FILE *fp;
  fp = fopen("result.dat","w");
  if(fp==NULL){
    printf("We can't open result.dat");
    exit(1);
  }
  fprintf(fp,"Hello!How about you!?");
  fclose(fp);
  return 0;
}