#include <stdio.h>

void change_it(int a[], int n){
   
    a[n-1] = 100;
    
    
}

int main()
{
    int a[10];
    int n;
    
    scanf("%d", &n);
    
    for(int i = 0; i<n; i++)
    {
        scanf("%d",& a[i]);
    }
    
    
    for(int i=0; i<n; i++)
    {
        printf("%d ", a[i]);
        change_it(a, n);
    }
    
    return 0;
}

