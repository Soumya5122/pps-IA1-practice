#include<stdio.h>
int input(int a,int b,int c)
{
  
  printf("enter three number\n");
  scanf("%d %d %d\n",&a,&b,&c);
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
void output(int a,int b,int c,int largest)
{
  printf("the value largest among a,b,c is %d",largest);
  
}
int main()
{
  int a,b,c,largest,result;
  input(a,b,c);
  result= cmp(a,b,c);
  output(a,b,c,largest);
  return 0;
}