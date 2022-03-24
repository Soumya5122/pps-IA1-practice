#include<stdio.h>
int input_n()
{
  int n;
  printf("enter a number\n");
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
  int i;
  int sum=0;
  for(int i=1;i<=5;i++)
    {
      sum=sum+i;
    }
  return sum;
}
void output(int n,int sum)
{
  int i;

  for(int i=0;i<=5;i++)
    {
      printf(" %d ",i);
    }
  printf("%d=%d \n",n,sum);
}
int main()
{
  int num,result;
  num=input_n();
  result=sum_n(num);
  output(num,result);
  return 0;
}