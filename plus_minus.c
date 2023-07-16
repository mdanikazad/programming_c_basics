#include<stdio.h>
#include<string.h>
#include <math.h>
#include <stdlib.h>


int main()


{
    
    int n;
    scanf("%d",&n);

    getchar();
    for(int i=0;i<n;i++)
    {
        int j;
        scanf("%d",&j);
        getchar();
        char s[j];
        int length = strlen(s); 
        int count_plus = 0;
	int count_minus = 0;
        for(int k=0;k<length;k++)
        {
            if(s[k] == '+')
            {
              count_plus++;
            }
            if(s[k] == '-'){
	      count_minus++;
	    }
            if(count_plus > count_minus){
	      printf("%d", count_plus);
	    } 
            else
	      printf("%d", count_minus);
	} 

           
        
    }
    
         
    
    return 0;
}
