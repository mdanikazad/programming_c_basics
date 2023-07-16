#include <stdio.h>

int main()
{
    int n, sum;
    scanf("%d",&n);
    
    int ar[n];
    
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &ar[i]);
        sum = sum + ar[i];
    }
    
    int positive_sum = sum;
    if(positive_sum < 0)
    {
        positive_sum *= -1;
    }
    
    printf("%d",positive_sum);

    
    return 0;
}
