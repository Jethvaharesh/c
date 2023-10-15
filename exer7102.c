// * * * * *
// *     *
// *   *
// * *
// *
#include <stdio.h>
void main()
{
    int j, i,k;
    k=5;
    for (i =k; i >= 1; i--)
    {
       if(j==1||i==k||i==j)
        {
            for (j = 1; j <= i; j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
