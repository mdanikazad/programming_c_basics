#include <stdio.h>

int main()
{       
    int i,j,n,sum=0;

    scanf("%d", &j);
    for (i=1;i<=j;i++)
     {
        scanf("%d",&n);
	sum +=n;
     }

       printf("%d\n", sum);	
}
