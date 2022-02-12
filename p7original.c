#include<stdio.h>
typedef struct _complex
{
 float real;
 float imaginary;
}
complex;
complex input()
{
 complex c;
 printf("Enter the real part:");
 scanf("%f",&c.real);
 printf("Enter the imaginary part:");
 scanf("%f",&c.imaginary);
 return c;
}
complex add(complex a, complex b)
{
 complex sum;
 sum.real = a.real + b.real;
 sum.imaginary = a.imaginary + b.imaginary;
 return sum;
}
void output(complex a, complex b,complex sum)
{
 printf("The sum of %0.1f + %0.1fi and %0.1f + %0.1fi is
%0.1f + %0.1fi\n",a.real,a.imaginary,b.real,b.imaginary,
sum.real,sum.imaginary);
}
int main()
{
 complex c1,c2,sum;
 c1 = input();
 c2 = input();
sum = add(c1,c2);
 out#include<stdio.h>
typedef struct _complex
{
 float real;
 float imaginary;
}
complex;
complex input()
{
 complex c;
 printf("Enter the real part:");
 scanf("%f",&c.real);
 printf("Enter the imaginary part:");
 scanf("%f",&c.imaginary);
 return c;
}
complex add(complex a, complex b)
{
 complex sum;
 sum.real = a.real + b.real;
 sum.imaginary = a.imaginary + b.imaginary;
 return sum;
}
void output(complex a, complex b,complex sum)
{
 printf("The sum of %0.1f + %0.1fi and %0.1f + %0.1fi is
%0.1f + %0.1fi\n",a.real,a.imaginary,b.real,b.imaginary,
sum.real,sum.imaginary);
}
int main()
{
 complex c1,c2,sum;
 c1 = input();
 c2 = input();
sum = add(c1,c2);
 out#include<stdio.h>
typedef struct _complex
{
 float real;
 float imaginary;
}
complex;
complex input()
{
 complex c;
 printf("Enter the real part:");
 scanf("%f",&c.real);
 printf("Enter the imaginary part:");
 scanf("%f",&c.imaginary);
 return c;
}
complex add(complex a, complex b)
{
 complex sum;
 sum.real = a.real + b.real;
 sum.imaginary = a.imaginary + b.imaginary;
 return sum;
}
void output(complex a, complex b,complex sum)
{
 printf("The sum of %0.1f + %0.1fi and %0.1f + %0.1fi is
%0.1f + %0.1fi\n",a.real,a.imaginary,b.real,b.imaginary,
sum.real,sum.imaginary);
}
int main()
{
 complex c1,c2,sum;
 c1 = input();
 c2 = input();
sum = add(c1,c2);
 output(c1, c2, sum);
 return 0;
}

