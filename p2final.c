#include<stdio.h>
int input()
{
  int num;
  printf("enter a number\n");
  scanf("%d",&num);
  return num;
}
int cmp(int a,int b,int c)
{
  int *large;
  if(a>b && a>c)
  {
    *large=a;
  }
  else if(b>c)
  {
    *large=b;
  }
  else 
  {
    *large=c;
  }
  
}
void output(int a,int b,int c,int largest)
{
  printf("the number largest among %d,%d,%d is %d\n",a,b,c,largest);
}
int main()
{
  int a,b,c,largest,result;
  a=input();
  b=input();
  c=input();
  result=cmp(a,b,c);
  output(a,b,c,largest);
  return 0;
}