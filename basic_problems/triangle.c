#include <stdio.h>

int main() {

    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if (x == y && y == z && x == z && x != 0 && y !=0 && z !=0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    
    
    return 0;
}
