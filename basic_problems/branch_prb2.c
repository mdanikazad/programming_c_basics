#include<stdio.h>

int main()

{
  int a,b,c;
  scanf("%d %d %d", &a, &b, &c);
  if (a > b)
  {
   	printf("A is bigger\n");
  }
  else  
  {
    if(b < a)
    {
      printf("B is bigger");
    }
    else if ( c < a && c < b)
    {
      printf("C is bigger");
    }
  else
  {
      printf("They are equal");
  }
   
  return  0;
 }
}

