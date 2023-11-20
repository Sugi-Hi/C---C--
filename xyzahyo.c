#include<stdio.h>
#include<stdlib.h>
#define XS 39
#define YS 39
#define R 18


int main(){
  int x,y;
  int xx,yy;
  FILE *fp;
  fp = fopen("result.dat","w");
  if(fp==NULL){
    printf("We can't open result.dat");
    exit(1);
  }
  for(y=0;y<YS;y++){
    yy = y-YS/2;
    for(x=0;x<XS;x++){
      xx = x - XS/2;
      if(xx*xx+yy*yy<R*R){
        fprintf(fp,"■ ");
      }else{
        fprintf(fp,"□ ");
      }
    }
    fprintf(fp,"\n");
  }
  fclose(fp);
  return 0;
}