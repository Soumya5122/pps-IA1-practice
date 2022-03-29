#include<stdio.h>
float input()
{
  float n;
  printf("enter a number \n");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)
{
  float x=n;
  float y=1;
  float e=0.000001;
  while(x-y>e)
    {
      x=(x+y)/2;
      y=n/x;
    }
  return x;
}
void output(float n,float sqrt_result)
{
  printf("square input of given input %0.2f is =%0.2f\n",n,sqrt_result);
}
int main()
{
  float n,sres;
  n=input();
  sres=my_sqrt(n);
  output(n,sres);
  return 0;
}