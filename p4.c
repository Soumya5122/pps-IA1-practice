#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the array size\n");
  scanf("%d\n",&n);
  return n;
}
void input_array(int n,int a[n])
{
  int i;
  printf("enter the arrays\n");
  for(int i=1;i<=3;i++)
    {

      scanf("%d\n",a[i]);
    }
}
int sum_n_arrays(int n,int a[n])
{
  int i,sum;
  sum=0;
  for(int i=1;i<n;i++)
    {
      sum=sum+a[i];
    }
}
void out_put(int n,int a[n],int sum)
{
  printf("the sum of different n numbers is %d",sum);
}
int main(){
  
  int n=input_array_size();
  int a[n];
  input_array(n,a);
  int sum =sum_n_arrays(n,a);
  out_put(n,a,sum);
  return 0;
}