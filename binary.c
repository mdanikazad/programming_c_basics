#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    scanf("%d", &t);

    getchar();
    for (int i = 0; i < t; i++)
    {
        int p;
        scanf("%d", &p);
        getchar();
        char ch[p];

        fgets(ch, p + 1, stdin);
        int length = strlen(ch);
        int count = 0;
        for (int i = 0; i < length; i++)
        {
            if (ch[i] == '1' && ch[i + 1] == '0')
            {
                count++;

            }
            if (ch[i] == '0' && ch[i + 1] == '1')
            {
                count++;

            }
        }
        printf("%d\n", count);
    }

    return 0;
}
