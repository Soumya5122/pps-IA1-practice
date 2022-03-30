#include<stdio.h>
float input()
{
  float n;
  printf("enter the value\n");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)
{
  int sqr,tmp;
  sqr=n/2;
  tmp=0;
  while(sqr !=tmp)
    {
      tmp=sqr;
      sqr=(n/tmp+tmp)/2;
    }
  return sqr;
}
void output(float n,float sqrt_result)
{
  printf("square root of %0.2f is %0.2f",n,sqrt_result);
}
int main()
{
  float n,a;
  n=input();
  a=my_sqrt(n);
  output(n,a);
  return 0;
}
