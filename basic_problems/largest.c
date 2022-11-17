#include<stdio.h>

int main()

{
 
 int a, b, c;
 printf("Enter a three numbers: ");
 scanf("%d %d %d",&a, &b, &c);

 if (a > b && b > c)
 {
   printf("a is largest\n");
 }
 else
 {
   if( b > a && b > c)
   {
    printf("b is largest\n");
   }
   else
   {
   printf("c is largest\n");
   }   
 }

 return 0;
}
