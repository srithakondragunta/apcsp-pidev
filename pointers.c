#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);

  printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);
float d;
d = 10;
float e;
e = 13;
float* ptrtod = &d;
float* ptrtoe = &e;
  printf("The value of d is %f\n", d);
 *ptrtod = 16;
  printf("The value of d is %f\n", d);
  printf("The value of ptrtod is %d\n", ptrtod);
  printf("It stores the value %f\n", *ptrtod);
  printf("The address of d is %f\n", &d);

  printf("The value of e is %f\n", e);
 *ptrtoe = 26;
  printf("The value of e is %f\n", e);
  printf("The value of ptrtoe is %d\n", ptrtoe);
  printf("It stores the value %f\n", *ptrtoe);
  printf("The address of e is %f\n", &e);
  float* pnttod = &d;
  float* pnttoe = &e;
  float tempvar=*pnttod;
  *ptrtoe=*ptrtoe;
  *pnttoe=tempvar;
  printf("The new value of d is %f. The new value of e is %f.\n", d, e);

}
