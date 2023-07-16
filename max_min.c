#include<stdio.h>

int main()
{
    int n, i;
    //scanf("%d", &n);
    
    int a[3]={0};
    for(i=0; i<3; i++)
    {
        scanf("%d", &a[i]);
    }
    
    int x, b, c;
    x = a[0];
    b = a[1];
    c = a[2];
    
    for(i=0; i<3-1; i++)
    {
        for(int j=i+1; j<3; j++)
        {
            if(a[i] > a[j])
            {
                int tmp = a[j];
                a[j] = a[i];
                a[i] = tmp;
            }
        }
    }
    
    for(i=0; i<3; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\n");
    
    printf("%d\n",x);
    printf("%d\n",b);
    printf("%d\n",c);
    
    
    
    return 0;
}
