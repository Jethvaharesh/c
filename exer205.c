// Check if a triangle is equilateral, isosceles, or scalene. (lenth)
#include<stdio.h>
void main()
{
     int lenth1,lenth2,lenth3;
     printf("enter lenth1 of triangle");
     scanf("%d",&lenth1);
     printf("enter lenth2 of triangle");
     scanf("%d",&lenth2);
     printf("enter lenth3 of triangle");
     scanf("%d",&lenth3);  

     if(lenth1==lenth2 && lenth1==lenth3)
     {
        printf("\nthis is equilateral triangle\n");
     }

     else if(lenth1==lenth2|| lenth1==lenth2||lenth2==lenth3)
     {
        printf("\nthis is isoscales triangle\n");
     }

     else
     {
        printf("\nthis is scalene triangle\n");
     }




}