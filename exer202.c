  //write a program to check number negetive or not ,if negetive to convert int to possitive 
#include<stdio.h>
void main()
{
   int number;
   printf("enter value of  number: ");
   scanf("%d",&number);

   if (number>0 )
   {
     printf("\n\tYOUR NUMBER IS POSITIVE");

   }

   else if(number==0 )
   {
     printf("\n\tYOUR NUMBER IS ZERO");

   }

   else
   {
     number=number*(-1);
     printf("\n\tYOUR NUMBER IS NEGATIVE ,AFTER VALUE IS %d",number);

   }

     printf("\n\t \tGOOD BY");

}
