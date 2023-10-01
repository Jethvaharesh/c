//*

//*****
//*****
//*****
//*****
//*****

//*
// **
// ***
// ****
// *****

#include <stdio.h>
void main()
{
    int j, i, k;
    j = 1;
    k = 1;
    i = 1;


  while(k<=5)
    {
        while (j <= 5)
        {
            printf("*");
            j++;
        }

        printf("\n");
        j = 1;
        k++;
    }
    // while (j <= 5)
    // {
    //     printf("*");
    //     j++;
    // }
}