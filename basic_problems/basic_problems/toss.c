#include <stdio.h>

int main()
{


   int i, j, N, K;
   char T;
   char H;

   scanf("%d", &N);
   for(i=1;i<=N;i++)
   {
       scanf("%d", &K);
       for(j=1;j<=K;j++)
       {
           scanf("%s", &H);
           scanf("%s", &T);
           if(H > T){
               printf("England\n");
               printf("Pakistan");
           }
           else if(T > H){
               printf("Pakistan");
           }
           
           
       }
       
   }
   

    return 0;
}

