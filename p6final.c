#include<stdio.h>
void input_two_string(char *a,char *b)
{
  printf("enter the characters\n");
  scanf("%s%s",a,b);
}
int strcmp(char *a,char *b)
{
  int i;
  for(i=0;a[i]!="\0" && b[i]!="\0";i++)
    
      return a[i] - b[i];
    
}
void output(char *a,char *b,int c)
{
  
  if(c>0)
  {
    printf("%s is greater than %s",b,a);
  }
  else if(c<0)
  {
    printf("%s is greater than %s",a,b);
  }
  else
    printf("%s is greter than %s",b,a);
}
int main()
{
  char a[21],b[30];
  input_two_string(a,b);
  int c=strcmp(a,b);
  output(a,b,c);
  return 0;
}