// * * * * *
// * * * *
// * * *
// * *
// *
#include <stdio.h>
void main()
{
    int j, i,k;
    i = 1;
    k=5;

    while (i<=5)
    {
        j = 1;
        while (j<=k)
        {
           
            printf("* ");
            j++;
            
        }
        printf("\n");
         i++;
         k--;
    }
}
