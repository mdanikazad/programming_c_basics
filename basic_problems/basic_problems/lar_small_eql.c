#include<stdio.h>

int main()


{

  int x, y;
  printf("Please enter two numbers: ");
  scanf("%d %d", &x, &y);

  if (x > y)
  {
   printf("X is the largest\n");
  }
  else
  {
     if(x < y)
     {
      printf("Y is the largest\n");
     }
     else
     {
      printf("They are equal.\n");
     }
  }
  return 0;
}
