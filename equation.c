#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
  float a,b,c,ans1,ans2;
  float D;
  float ans;
  printf("cal root of [ax^2+bx+c=0]\n");
  printf("input a \n");
  scanf("%f",&a);
  printf("input b \n");
  scanf("%f",&b);
  printf("input c \n");
  scanf("%f",&c);

  if(a==0){

    printf("a is 0.can not calc \n");
    printf("system  exit \n");
    return -1;
    exit(0);

  }else{
    D=b*b-4*a*c;
    if(D>=0){
      D=sqrt(D);
      ans1=(-b+D)/(2*a);
      ans2=(-b-D)/(2*a);
      printf("jisuukai \n");
      printf("ans1=%f \n",ans1);
      printf("ans2=%f \n",ans2);
    }else{
      D=-1*D;
      D=sqrt(D);
      D=D/(2*a);
      ans=-b/(2*a);
      printf("kyosuukai \n");
      printf("ans1=%f+i* %f \n",ans,D);
      printf("ans2=%f-i* %f \n",ans,D);      
    }
  }
  return 1;
}