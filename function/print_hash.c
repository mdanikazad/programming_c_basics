#include<stdio.h>

void print_hash(int n)
{
   int i;
   for(i =0; i<n; i++)
   {
     printf("#");
   }
  printf("\n");
}

int main()

{
   int i;
   for(i = 0; i <= 10; i++)
   {
       print_hash(i);
   }
   return 0;
}
