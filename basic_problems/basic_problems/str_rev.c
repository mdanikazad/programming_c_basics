#include<stdio.h>
#include <string.h>

int main()

{
   char s[100];
   printf("Insert a line to reverse\n");
   scanf("%s", s);

   strrev(s);
  
   printf("%s\n", s);
    
   return 0;
}
