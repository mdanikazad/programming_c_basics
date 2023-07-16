#include<stdio.h>
#include<string.h>

int main()


{
    
    int i, j, n;
    
    
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&j);
        char s[j];
        fgets(s, j+1, stdin);
        getchar();
        int len = strlen(s); 
        int count = 0;
        for(i=0;i<=len;i++)
        {
            if(s[i] == '0' && s[i+1] == '1')
            count ++;
            
            else if(s[i] == '1' && s[i+1] == '0')
            count ++;
            
         
        }   
        printf("%d", count);
        
    }
    
         
    
    return 0;
}
