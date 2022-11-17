#include<stdio.h>
#include<math.h>

int main()

{

   int a, n, r, value, i;

   printf("Enter firest number: ");
   scanf("%d", &a);

   printf("Enter total numbers in this gp series: ");
   scanf("%d", &n);

   printf("Please enter common ratio: ");
   scanf("%d", &r);

   value = a;
   printf("G, P series: ");
   for(i=0;i<n;i++)
   {
      printf("%d ", value);
      value = value * r;

   
   }

   return 0;
}
