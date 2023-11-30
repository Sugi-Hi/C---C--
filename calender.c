#include<stdio.h>

int main(){
  int year, month;
  int yc, mc;
  int week;
  int i,j;
  int day;
  int last[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
  int lastday;
  int cal[6][7];
  printf("年を入力して下さい：");
  scanf("%d",&year);
  printf("月を入力して下さい：");
  scanf("%d",&month);
  yc = year;
  mc = month;
  if(month==1 || month==2){
    yc--;
    mc += 12;
  }
  week = ((yc+(yc/4)-(yc/100)+(yc/400)+(13*mc+8)/5)+1) % 7;
  day = 1-week;

  for(i=0;i<6;i++){
    for(j=0;j<7;j++){
      cal[i][j] = day++;
    }
  }
  lastday = last[month-1];
  if(month==2){
    if(year % 400 ==0 || year % 100 != 0 && year % 4 == 0){
      lastday = 29;
    }
  }
  printf("　日　月　火　水　木　金　土\n");
  for(i=0;i<6;i++){
    for(j=0;j<7;j++){
      if(cal[i][j] > 0 && cal[i][j] <= lastday){
        printf("%4d",cal[i][j]);
      }else{
        printf("    ");
      }
    }
    printf("\n");
  }
  return 0;

}