//write area of triangle,circle,cylinder,sqareand also checke for continue and stop.
#include<stdio.h>
void main()
{
    int number,operation,temp;
    temp=200;
    float height, base,area,pi,radius;
    pi=3.141592;
    
    do
    {
       printf("\nselect number for operation of area \n");
       printf("\n 1 for area of triangle \n");
       printf("\n 2 for area of circle \n");
       printf("\n 3 for area of cylinder \n");
       printf("\n 4 for area of sqare \n");
       printf("\n 5 for exit \n");
       printf("\n enter number: ");
       scanf("%d",&operation);

       switch(operation)
       {
         case 1:

         printf("\n area of triangle ((height*base)/2) \n");
         printf("\n enter heghit is : " );
         scanf("%f",&height);
         printf("\n enter base is : ");
         scanf("%f",&base);
         area=(height*base)/2;
         printf("\n\narea of triangle is %f",area);
         break;

         case 2:
           
           printf("\n area of circle(pi(r*r)) \n");
           printf("enter radius is: ");
           scanf("%f",&radius);
           area=pi*(radius*radius);
           printf("\n\n area of circle is:%.2f",area);
           break;





        default:
          printf("\n invalide number choose valide number\n");
          break;


       }






    }while(temp!=404);






}