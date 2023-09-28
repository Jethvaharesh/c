#include<stdio.h>
void main()
{
   //   https://i.pinimg.com/originals/24/c0/3b/24c03bc8f04e1d97887431ef6ae23c89.jpg .

    int  planet;
    

    printf("\n||||||||||||||||||||  select any one number for any one planet||||||||||||||| ");
    printf(" 1 for murcury \n");
    printf(" 2 for venus \n");
    printf(" 3 for earth \n");
    printf(" 4 for mars \n");
    printf(" 5 for jupiter \n");
    printf(" 6 for saturn \n");
    printf(" 7 for uranus \n");
    printf(" 8 for neptune\n\n");

    printf("enter number of planet: ");
    scanf("%d",&planet);

    printf("\nnumber of planet%d \n\n",planet);

    switch (planet)
    {
      
      
     case 1:
       printf("mercury distance is 57910006 km");
       break;   
     
     case 2:
       printf("venus distance is 108199995 km");
       break;

     case 3:
       printf("Earth distance is 149599951 km");
       break;   
     case 4:
       printf("mars distance is 227939920 km");
       break;

     case 5:
       printf("jupiter distance is 978330257 km");
       break;

     case 6:
       printf("saturn distance is 1429400028 km");
       break;
       
     case 7:
       printf("urenus distance is 2870989270 km");
       break;

     case 8:
       printf("neptune distance is 4504299579 km");
       break;

     default:
       printf(" invalide input");
       break;


    }
    
  }







