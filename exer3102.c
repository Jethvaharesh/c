// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
#include <stdio.h>
void main()
{
    int j,i,k;
    i=1;
    k=1;

 while(i<=5)
    {
        j = 1;
        while (j <= i)
        {
            printf("%d ",k);
            k=k+1;
            j++;
        }
        printf("\n");
        i++;
        
    }

    //     j = 1;
    //     while (j <= 5)
    //     {
    //         printf("*");
    //         j++;
    //     }
    //     printf("\n");

    //     j = 1;
    //     while (j <= 5;)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");

    //     j=1;
    //   while(j<=5)
    //    {
    //     printf("*");
    //     j++;
    //    }
    //     printf("\n");

    //    j=1;
    //   while(j<=5)
    //    {
    //     printf("*");
    //     j++;
    //    }
    //     printf("\n");
}