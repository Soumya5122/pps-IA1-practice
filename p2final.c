#include<stdio.h>
int input()
{
  int n;
  printf("enter a number\n");
  scanf("%d",&n);
  return n;
}
int cmp(int a,int b,int c)
{
  int large;
  if(a>b && a>c)
  {
    large=a;
  }
  else if(b>c)
  {
    large=b;
  }
  else ;
  {
    large=c;
  }
  return large;
}
void output(int a,int b,int c,int largest)
{
  printf("the largest among %d %d %d is %d",a,b,c,largest);
}
int main()
{
  int a,b,c,large;
  a=input();
  b=input();
  c=input();
  large=cmp(a,b,c);
  output(a,b,c,large);
  return 0;
}
