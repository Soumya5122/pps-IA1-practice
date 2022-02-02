#include<stdio.h>
int input()
{
  int num;
  printf("enter the number:\n");
  scanf("%d",&num);
  return 0;
}

int cmp(int a,int b,int c)
{
  if (a>b && a>c)
  {
    *large=a;
  }
  else if (b>c)
  {
    *large=b;
  }
  else 
  {
    *large=c;
  }
  return large;
}

void output(int a,int b,int c,int large)
{
  int main();
  input(&a,&b,&c);
  cmp(a,b,c,&result);
  output(result);
  return main;
}