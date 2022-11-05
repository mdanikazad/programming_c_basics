#include<stdio.h>

int main()

{
  int a=5, b=13, c;

  c = a;
  a = b;
  b = c;

  printf("%d and %d\n", a, b);
  
  return 0;
}
