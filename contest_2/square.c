#include<stdio.h>
int main()


{

    

    //float number, square;
    //printf("Please Enter any integer Value : ");
    //scanf("%f", &number);
    //square = number * number;
    //printf("square of a given number %.2f is  =  %.2f", number, square);
    //
    

    int i, n, square;
    for(n=1;n<=5;n++)
    {
      i++;
      square = n * n;
      printf("Number is : %d and square of the %d is: %d\n", n, n, square);

    }


    return 0;
}
