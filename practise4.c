#include<stdio.h>
void main()
{
    int month,date ;

    printf("enter value of month");
    scanf("%d",&month);
    printf("enter value of date ");
    scanf("%d",&date);

    printf("\nvalue of month : %d \n\n",month);
    printf("value of date :   %d \n\n",date );

    if ((month==3 && date >=21 && date==31 ) ||(month ==4 && date>=1 && date <=19))
    {
        printf("symbole ; the ram and zodiac sign :aries \n ");
    }



}
   
  
 


