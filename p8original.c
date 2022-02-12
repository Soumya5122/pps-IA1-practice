#include<stdio.h>
typedef struct _complex
{
 float real;
 float imaginary;
}
complex;
int get_n()
{
 int n;
 printf("Enter the number of complex numbers:");
 scanf("%d",&n);
 return n;
}
complex input_complex()
{
 complex c;
 printf("Enter the real part:");
 scanf("%f",&c.real);
 printf("Enter the imaginary part:");
 scanf("%f",&c.imaginary);
 return c;
}
void input_n_complex(int n, complex c[n])
{
 for(int i=0;i<n;i++)
 {
 c[i] = input_complex();
 }
}
complex add(complex a,complex b){
 complex res;
 res.real = a.real + b.real;res.imaginary = a.imaginary + b.imaginary;
 return res;
}
complex add_n_complex(int n,complex c[n])
{
 complex res;
 res.imaginary = 0;
 res.real = 0;
 for(int i=0;i<n;i++)
 {
 res = add(res,c[i]);
 }
return res;
}
void output(int n, complex c[n],complex result)
{
 if(n==1)
 {
 printf("%0.2f + %0.2fi is %0.2f + %0.2fi\n",c[0].real,
 c[0].imaginary, result.real, result.imaginary);
 }
 else
 {
 for(int i=0; i<n-1; i++)
 {
 printf("%0.2f + %0.2fi\n",c[i].real,c[i].imaginary);
 }
 printf("+ %0.2f + %0.2fi is\n%0.2f + %0.2fi\n",c[n].real, c[n-1].imaginary, result.real, result.imaginary);
 }
}
int main()
{
 int n = get_n();
 complex c[n], res;
 input_n_complex(n,c);
 res = add_n_complex(n,c);
 output(n, c, res);
 return 0;
}
