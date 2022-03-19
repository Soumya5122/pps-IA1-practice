#include<stdio.h>
int input_n()
{
  int n;
  printf("enter a number\n");
  scanf("%d\n",&n);
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
  printf("the sum of n numbers is %d\n",(sum));
}
int main()
{
  int n,sum,result;
  input_n(n);
  result=sum_n(sum);
  output(n,result);
  return 0;
}