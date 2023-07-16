#include <stdio.h>

int main() {
    
    int i, n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d", i);
     
    }
    printf("\n");
    for(i=2;i<n;i++)
    {
        printf("%d ", i);
        {
            for(int j=1;j<n;i++)
            {
                printf(" ");
            }
         printf("%d \n", n);
        }
    }

    return 0;
}
