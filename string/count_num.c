#include <stdio.h>
#include <string.h>

int main()
{
    
    int i, n;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        
    }
    
    int cnt[7]={0};
    for(int i=0; i<n;i++)
    {
        cnt[a[i]]++;
    }
    
    for(i=0; i<n; i++)
    {
     printf("%d - %d\n",i, cnt[i]);
    }
    
  return 0;
} 

