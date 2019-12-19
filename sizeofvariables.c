#include<stdio.h>

int main()
{
  int a = 545;

  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
}



#include<stdio.h>

int main()
{
 int a = 545;
 char b = 'a';
 float c = 5.245;
 double d = 1.45327
 unsigned int e = 14;
 short int f = 16;

 printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
 printf("charater b value: %c and size: %c bytes\n", b, sizeof(b));
 printf("float c value: %f and size: %f bytes\n", c, sizeof(c));
 printf("double d value: %g and size: %g bytes\n", d, sizeof(d));
 printf("long int e value: %d and size: %d bytes\n", e, sizeof(e));
 printf("short int f value: %d and size: %d bytes\n", f, sizeof(f));
}

