#include<stdio.h>
#include<math.h>
float input()
{
  float n;
  printf("enter a number\n");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)
{float x=n;
  float y=1;
  float e=0.000001;
  while (x-y>e)
  {
    x=(x+y)/2;
    y=n/x;
  }
  return x;

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