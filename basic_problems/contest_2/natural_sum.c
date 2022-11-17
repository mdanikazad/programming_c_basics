#include<stdio.h>


int main()

{

  int i, sum=0, c;
  printf("Enter the range for number: ");
  scanf("%d", &c);


 // while(i<c)
 // { 
 //   i++;
 //   printf("The first 7 natural number is: %d ", i);
 //   printf("\n");
 //   sum = sum+i;
 // }
 // printf("The sum of Natural Number upto 7 terms: %d\n", sum);


 
 printf("The first 7 natural number is :\n");	 
 for(i=1;i<=c;i++)
 {
  printf("%d ", i);
  sum = sum+i;
 }
  printf("\n");
  printf("The Sum of Natural Number upto 7 terms: %d\n", sum); 
  
  return 0;
}
