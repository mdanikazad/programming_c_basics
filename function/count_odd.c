#include <stdio.h>

int count_odd(int a[], int n){
    
    int i, count=0;
    
    for(i=0; i<n; i++)
    {
        if(a[i] % 2 != 0)
        {
            count++;
        }
    }
    
    return count;
}

int main()
{
     
    int a[10];
    int n;
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int res = count_odd(a, n);
    printf("%d", res);
    
    
    return 0;
}
