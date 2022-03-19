#include<stdio.h>
void input(int *a,int *b)
{
  printf("enter the two values\n");
  scamf("%d %d",a,b);
}
void add(int a,int b,int *sum)
{
  *sum=a+b;
}
void output(int a,int b,int sum)
{
  printf("the addition of %d and %d is %d\n",a,b,sum);
}
int main()
{
  int a,b;
  input(&a,&b);
  add = sum(a,b);
  output(a,b,sum);
  return 0;
}