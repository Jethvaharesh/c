// *
// * *
// *   *
// *     *
// * * * * *

#include <stdio.h>
void main()
{
    int j, i;

    i = 1;
    while (i <= 5)
    {
        j = 1;
        while (j <= i)
        {
            if (j == 1 || i == 5 || i == j)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
            j++;
        }
        printf("\n");
        i++;
    }
}
// #include<stdio.h>
// void main()
// {
//     int j,i;

//     for (i = 1; i <= 5;i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }