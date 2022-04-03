#include<stdio.h>
float input()
{
   float n;
   printf("enter a number to find the square root of\n");
   scanf("%f",&n);
   return n;
}

float squareroot(float n)
{
  int tmp,sqr;
  sqr=n/2;
  tmp=0;
  while(sqr !=tmp)
    {
      tmp=sqr;
      sqr=(n/tmp+tmp)/2;
    }
  
  return sqr;
}

void output(float n,float sres)
{
  printf("square input of given input%0.2f is =%0.2f\n",n,sres);
}
int main()
{
  float n,sres;
  n=input();
  sres=squareroot(n);
  output(n,sres);
  return 0;
}