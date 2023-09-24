// write a program to print day of month and year.
#include <stdio.h>
void main()
{
    int month,year;
    printf("enter your month:  ");
    scanf("%d",&month);
    printf("enter your year:  ");
    scanf("%d",&year);
     
    printf("\n\n\tyour month and year is :%d/%d\n",month,year);

    if((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10)||(month==12))
    {
        printf("\n\t\tday is 31");
    }

    else if(month==2)
    {
        printf("\n\t\tday is 28/29");
    }
    // else if(month=3)
    // {
    //     printf("day is 31");
    // }
    else if((month==4)||(month==6)||(month==9)||(month==11))
    {
        printf("\n\t\tday is 30");
    }
    // else if(month==5)
    // {
    //     printf("day is 31");
    // }
    // else if(month==6)
    // {
    //     printf("day is 30");
    // }
    // else if(month==7)
    // {
    //     printf("day is 31");
    // }
    // else if(month==8)
    // {
    //     printf("day is 31");
    // }
    // else if(month==9)
    // {
    //     printf("day is 30");
    // }
    // else if(month==10)
    // {
    //     printf("day is 31");
    // }
    // else if(month==11)
    // {
    //     printf("day is 30");
    // }
    // else if(month==12)
    // {
    //     printf("day is 31");
    // }
    else if((month<=0)||(month>=13))
    { 
        printf("\n\t\tinvalide input");
    }
    else
    {
        printf("\n\n\tempty input ");
    }
      
        printf("\n\n\t\tGOOD BY");
        
}