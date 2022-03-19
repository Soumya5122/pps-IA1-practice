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
  int *large;
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
  
}

void output(int a,int b,int c,int large)
{
  printf("%d is the largest among them \n",large);
}

  int main()
  {
    int x,y,z,large,result;
    x=input();
    y=input();
    z=input();
    result=cmp(x,y,z);
    output(x,y,z,large);
    return 0;
  }
  