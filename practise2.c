//write a program to find whether given year is leep year or not(using if else.)
#include<stdio.h>
void main()
{
   int year;
    printf("enter year : ");
    scanf("%d",&year);

    printf("\nvalue of year is %d ",year);

    if (year%4==0)
    {
       printf("\n year is leep year. \n ");

    }

    else
    {
        printf("\nyear not a leep year. \n");
    }



}