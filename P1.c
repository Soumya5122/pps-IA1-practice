  #include<stdio.h>
  float input()
{
  float n;
  printf("enter a number\n");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)
{
  int sqrt,tmp;
  sqrt=n/2;
  tmp=0;
  while(sqrt!=tmp)
    {
      
      sqrt=(n/tmp+tmp)/2;
      sqrt=tmp;
    }
  return sqrt;
}
void output(float n,float sqrt_result)
{
  printf("square root of %0.2f =%0.2f",n,sqrt_result);
}
int main()
{
  float n,a;
  input(n);
  a=my_sqrt(n);
  output(n,a);
  return 0;
}
   