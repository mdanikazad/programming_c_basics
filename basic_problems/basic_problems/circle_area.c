#include<stdio.h>

int main()

{

   //code for calcluating the area of a circle.
   int radius;
   printf("Enter the radius of a circle: ");
   scanf("%d", &radius);


   float area;
   area = 3.15149*radius*radius;
   printf("The area of the circle is: %f\n", area);
   return 0;

}
