#include<stdio.h>
void main()
{  //write a program to check number is odd , even or zero .
   int number;
   printf("Number is ");
   scanf("%d",&number);

 if(number==0)
   {
     printf("\n\tNUMBER IS zero\n\t");
   }
 
 else if(number%2==0) 
   {
     printf("\n\tNUMBER IS  even\n");
   }
 
 else 
   {  
     printf("\nNUMBER IS ODD\n\t ");
   }
    printf("\n\t GOOD BY");
}