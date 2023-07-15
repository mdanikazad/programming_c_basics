#include <stdio.h>

int count_odd(){
    
    int i, n, count=0;
    int a[10];
    
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);

    }
    
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
     
    int c, m;
    int res = count_odd(c, m);
    printf("%d", res);
    
    
    return 0;
}
