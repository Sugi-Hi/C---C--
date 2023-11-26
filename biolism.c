#include<stdio.h>
#include<time.h>
#include<math.h>
#include"birthday.h"

int main()
{
  long day;
  long start,end;
  float Phy;
  float Emo;
  float Int;
  float ave;
  int i;
  int date;
  int y,m,d;
  FILE *fp;

  printf("Input Birth year (ex: 1970)\n");
  scanf("%d",&y);
  printf("Input Birth month (ex: 6)\n");
  scanf("%d",&m);
  printf("Input Birth day (ex: 30)\n");
  scanf("%d",&d);

  day=get_sec_birth_day(y,m,d);
  start=day-30;
  end=day+30;
  date=-30;

  fp=fopen("bio.txt","w");

  for(i=start;i<end;i++){
    Phy=sin((float)i/23*2*3.14);
    Emo=sin((float)i/28*2*3.14);
    Int=sin((float)i/33*2*3.14);
    ave=(Phy+Emo+Int)/3.0;
    fprintf(fp,"%d %f %f %f %f\n",date,Phy,Emo,Int,ave);
    date++;
  }

}