#include<stdio.h>
#include<math.h>
float input()
{
  float n;
  printf("enter a number\n");
  scanf("%f\n",&n);
  return n;
}
float my_sqrt(float n)
{
  float a=n;
  a=(pow(n,2));
}
void output(float n,float a)
{
  printf("the square root of %f is %f",n,a);
}
int main()
{
  float n,a;
  input(n);
  my_sqrt(a);
  output(n,a);
  return 0;
}