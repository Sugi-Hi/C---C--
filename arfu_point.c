#include<stdio.h>

void main(){
  int *p;
  int i;
  int a[5] = {1,2,3,4,5};
  printf("%p %p \n",p,a);
  p=a;
  printf("%p %p \n",p,a);

  for(i=0;i<5;i++){
    printf("a=%d\n",a[i]);
  }
  for(i=0;i<5;i++){
    printf("p=%d %p\n",*(p+i),p+i);
  }

}