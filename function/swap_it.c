#include<stdio.h>

void swap_it(int *x, int *y)
{
    int t;
     t   = *x;
    *x   = *y;
    *y   =  t;
}

int main()
{
    
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    swap_it(&num1, &num2);
    printf("%d %d", num1, num2);
    
    return 0;
}
