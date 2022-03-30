#include<stdio.h>
void input_two_string(char *a,char *b)
{
  printf("enter the string characters\n");
  scanf("%s%s",a,b);
}
int cmp(char *a,char *b)
{
  int c;
  int i=0;
  for(i=0;a[i]!='\0' && b[i]!='\0';i++)
    c=a[i]-b[i];
  return c;
}
void output(char *a,char *b,int result)
{
  int c;
  if(c>0)
  {
    printf("%s is greater than %s",b,a);
  }
  else if (c<0)
  {
  printf("%s is greater than %s",a,b);
  }
  else
  {
    printf("%s is greater than %s",b,a);
  }

}
int main()
{
  char a[20],b[20];
  int c,result;
  input_two_string(a,b);
  c=cmp(a,b);
  output(a,b,result);
  return 0;
}
