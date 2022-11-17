#include<stdio.h>

int main()

{

  int i, j, marks[3][7];

  marks[0][4] = 12;
  marks[1][1] = 17;
  marks[1][5] = 19;

  
  for(i=0;i<3;i++)
  {
      for(j=0;j<7;j++)
      {
         scanf("%d",&marks[i][j]);
      }   
  }
  printf("\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<7;j++)
      {
         printf("%d ", marks[i][j]);
      }   
   printf("\n");
  }

  return 0;
}


