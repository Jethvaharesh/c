// write area of triangle,circle,cylinder,sqareand also checke for continue and stop.
#include <stdio.h>
void main()
{
   int number, operation, temp,sqare;
   temp = 200;
   float height, base, area, pi, radius;
   pi = 3.141592;

   do
   {
      printf("\n\nselect operation for area");
      printf("\n 1 for area of triangle ");
      printf("\n 2 for area of circle ");
      printf("\n 3 for area of cylinder ");
      printf("\n 4 for sqare of number ");
      printf("\n 5 for exit ");
      printf("\n enter number: ");
      scanf("%d", &operation);

      switch (operation)
      {
      case 1:

         printf("\n|||||| area of triangle ||||||| \n"); //((height*base)/2)
         printf("\n enter heghit is : ");
         scanf("%f", &height);
         printf("\n enter base is : ");
         scanf("%f", &base);
         area = (height * base) / 2;
         printf("\n\n|||||area of triangle is %f |||||", area);
         break;

      case 2:

         printf("\n|||||area of circle||||| \n"); // (pi(r*r))
         printf("\n\nenter radius is: ");
         scanf("%f", &radius);
         area = pi * (radius * radius);
         printf("\n\n|||||| area of circle is:%.2f||||||", area);
         break;

      case 3:

         printf("\n|||||area of cylinder||||| \n"); //(2pirh+(2pirr))
         printf("\n\nenter radius is: ");
         scanf("%f", &radius);
         printf("\n enter height is:  ");
         scanf("%f", &height);
         area = 2 * pi * radius * height + (2 * pi * (radius * radius));
         printf("\n\n|||||| area of cylinder is:%.2f||||||", area);
         break;

      case 4:

         printf("\n|||||number of sqare||||| \n"); 
         printf("\n\nenter number is: ");
         scanf("%d", &number);
         sqare=number * number;
         printf("\n\n|||||| sqare of %d is: %d ||||||",number,sqare);
         break;

         case 5:
         
         temp=404;
         break;

      default:
         printf("\n invalide number choose valide number\n");
         break;
      }

   } while (temp != 404);
}