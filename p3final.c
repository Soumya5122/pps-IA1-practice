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
  int i,sum;
  sum=0;
  for(i=0;i<=5;i++)
    {
      sum=sum+i;
    }
  return sum;
}
void output(int n,int sum)
{
  for(int i=0;i<n;i++)
    {
      printf("%d+",i);
    }
  printf("%d=%d",n,sum);
}
int main()
{
  int n,sum;
  n=input_n();
  sum=sum_n(n);
  output(n,sum);
  return 0;
}
