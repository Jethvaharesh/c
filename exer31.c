// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
#include <stdio.h>
void main()
{
    int j, i;
    i=1;

 while(i<=5)
    {
        j = 1;
        while (j <= i)
        {
            printf("%d",i);
            j++;
        }
        printf("\n");
        i++;
    }
}
