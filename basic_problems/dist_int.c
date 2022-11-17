#include<stdio.h>

int main()
{
  int a, b, c, d, lar, sml;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  
  if(a > b && a > c && a > d)
  {
  }
  else if(b > a && b > c &&  b > d)
  {
  }
  else if(c > a && c > b && c > d)
  {
  }
  else if(d > a && d > b && d > c)
  {
  }

  if( a < b && a < c && a < d)
  {
  }
  else if(b < a && b < c && b < d)
  {
  }
  else if(c < a && c < b && c < d)
  {
  }
  else if(d < a && d < b && d < c)
  {
  }
  printf("Largest: %d\n", a, b, c, d);
  printf("Smallest: %d\n", a, b, c, d);

  return 0;
}
