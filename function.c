#include<stdio.h>

void sum_ave(int DATA[],int size, int sum[], float ave[])
{
  int i;
  sum[0]=0;
  for(i=0;i<size;i++){
    sum[0]+=DATA[i];
    ave[0] =sum[0]/size;
  }
}

void main()
{

  int ans_sum[1];
  float ans_ave[1];
  int data[5] = {1,2,3,4,5};
  sum_ave(data,5,ans_sum,ans_ave);
  printf("合計：%d   平均：%f \n",ans_sum[0],ans_ave[0]);

}