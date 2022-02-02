#include<stdio.h>

void input(int *a,int *b, int *c)
{
  printf("enter the three numbers\n");
  scanf("%d %d %d",a,b,c);
}

void cmp(int a,int b,int c,int *large)
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
    *large =c;
  }
}

void output(int largest
{
  printf("%d is the largest among them\n",largest);
}

int main()
{
  int a,b,c,result;
  input(&a,&b,&c);
  cmp(a,b,c,&result);
  output(result);
  return 0;
}