#include <stdio.h>
#define STR "Hello World!"
int main(void) 
{
  int n = 223;
  double a = 123.45;

  printf("*%2d*\n", n);
  printf("*%-10d*\n", n);
  printf("*%-12.5s*\n", STR);
  printf("*%012.3f*\n", a);
  printf("*%*.*f*\n", 14, 5, a);
}
