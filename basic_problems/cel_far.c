#include<stdio.h>

int main()

{
 double celsius, farenheit;
 printf("Enter the temparature in celsius: ");
 scanf("%lf", &celsius);
 farenheit = 1.8 * celsius + 32;
 printf("Temparature in farenheit is: %lf\n", farenheit);
 return 0;
}

