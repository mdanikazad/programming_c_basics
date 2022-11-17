#include<stdio.h>

int main()

{ 
  int number, reminder;
  printf("Please enter a number: ");
  scanf("%d", &number);  
  reminder = number % 2;
  if (reminder == 0) {
  	 printf("The number is even\n");
  }
  else {
   	 printf("The number is odd\n");	
  }
  return 0;
}
