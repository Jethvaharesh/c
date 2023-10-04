// 5 4 3 2 1
// 5 4 3 2
// 5 4 3
// 5 4
// 5
#include <stdio.h>
void main()
{
    int j, i,k;

    i = 5;
    while (i>=5)
    {
        j = 5;
        while (j <=i)
        {
            printf("%d",j);
            j--;
            
        }
        printf("\n");
        i--;
        
    }
}