#include<stdio.h>
#include<memory.h>

int main(){
  int i;
  int a[10]={1,2,3,4,5,6,7,8,9,10};
  int b[i];
  // for(i=0;i<10;i++){
  //   b[i] = a[i]*a[i];
  // }
  memcpy(b,a,sizeof(a));
  for(i=0;i<10;i++){
    printf("%d番目 a:%d b:%d \n",i+1,a[i],b[i]);
  }

}