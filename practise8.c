// wrire a program to find number of  area for triangle .

#include <stdio.h>
void main()
{
    int num, i;

    printf("enter number of triangle : ");
    scanf("%d", &num);

    float height[num], base[num], area[num];

    for (i = 0; i < num; i++)
    {
        printf("enter value of triangle %d :  \n", (i + 1));

        printf("enter height : ");
        scanf("%f", &height[i]);
        printf("enter base : ");
        scanf("%f", &base[i]);
    }

    for (i = 0; i < num; i++)
    {
        printf("||||||||||||||||||| value of triangle %d : %.2f |||||||||||||||||||\n", i + 1);
        printf("height : %.2f\n", height[i]);
        printf("base :%.2f\n", base[i]);
        area[i] = (height[i] * base[i]) / 2;
        printf("||||||||||||||||||| Area of triangle %d :%.2f|||||||||||||||||||||\n", (i + 1), area[i]);
    }
}