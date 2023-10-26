// check if a triangle is equaliteral, isoscales,or scalene.(lenth)
#include <stdio.h>
void main()
{
    int lenth1, lenth2, lenth3;

    printf("enter lenth 1 of triangle ");
    scanf("%d", &lenth1);
    printf("enter lenth 2 of triangle ");
    scanf("%d",&lenth2);
    printf("enter lenth 3 of triangle ");
    scanf("%d",&lenth3);

    if(lenth1==lenth2 && lenth1==lenth3)
    {
        printf("\n this equaliteral triangle \n");
    }

    else if(lenth1==lenth2 || lenth1==lenth3 || lenth2==lenth3)
    {
         printf("\n  this is isoscales triangle \n");
    }
    else
    {
        printf("\n this is scalene triangle");
    }
    
}