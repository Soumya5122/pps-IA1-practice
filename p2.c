#include<stdio.h>
int input()
{
  int n;
  printf("enter a number\n");
  scanf("%d \n",&n);
  return 0;
}
int cmp(int a,int b,int c)
{
  
  if(a>b && a>c)
  {
    printf("%d is large\n",a);
  }
  else if(b>c)
  {
    printf("%d is large\n",b);
  }
  else
  {
    printf("%d is large\n",c);
  }
  
}
void output(int largest)
{
  printf("the value largest among a,b,c is %d",largest);
  
}
int main()
{
  int a,b,c,largest,result;
  a=input();
  b=input();
  c=input();
  result= cmp(a,b,c);
  output(largest);
  return 0;
}