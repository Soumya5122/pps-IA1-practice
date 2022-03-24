#include<stdio.h>
int input()
{
  int n;
  printf("enter a number\n");
  scanf("%d\n",&n);
  return 0;
}
int cmp(int a,int b,int c)
{
  int large;
  if(a>b && a>c)
  {
    a=large;
  }
  else if(b>c)
  {
    b=large;
  }
  else
  {
    c=large;
  }
  
}
void output(int a,int b,int c,int largest)
{
  printf("the value largest  is %d",largest);
  
}
int main()
{
  int a,b,c,result;
  a=input();
  b=input();
  c=input();
  result=cmp(a,b,c);
  output(result);
  return 0;
}