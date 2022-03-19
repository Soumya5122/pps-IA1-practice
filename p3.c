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
  for(int i=1;i<=15;i++)
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
  int n,i,sum,result;
  input_n(n);
  result=(sum + i);
  output(n,result);
  return 0;
}