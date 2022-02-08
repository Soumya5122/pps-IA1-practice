#include<stdio.h>
int input_n()
{
  int n;
  printf("enter the number - n:\n");
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
int sum,i;
sum=0;
for(i=1;i<=n;i++)
{
  sum=sum+i;
}
return sum;
}
void output(int n,int sum)
{
  int i;
  for(i=1;i<n;i++)
  {
    printf("%d + ", i);
  }
  printf("%d = %d \n ",n,sum);
}
int main()
{
  int num,result;
  num=input_n();
  result=sum_n(num);
  output(num,result);
  return 0;
}