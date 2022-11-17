#include<stdio.h>


int main()


{
  int x, y;
  printf("Enter the number for x: ");
  scanf("%d",&x);

  printf("Enter the number for y: ");
  scanf("%d",&y);


  if (x > y)
  {
    printf("x is large\n");
  }
  else
  {
   printf("y is large\n");
  }
  
  return 0;
}
