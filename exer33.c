// 5 4 3 2 1
// 5 4 3 2
// 5 4 3
// 5 4
// 5
#include <stdio.h>
void main()
{
    int j, i, k;

    i = 5;
    while (i <= 5)
    {
        j = 1;
        while (j <= 5)
        {
            printf("%d", i);
            j++;
        }
        printf("\n");
        i++;
    }
}