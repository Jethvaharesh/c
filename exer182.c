#include<stdio.h>
void main()
{
 printf("\t\tprogram to find income taxe income :5 lk taxe rate :5 percent\n");

float m_inc,y_inc,taxe_inc,taxe_rate;
printf("\n\t\t monthly income  ");
scanf("%f",&m_inc);
y_inc=12*m_inc;
printf("\n\t\t yearly income %.2f\n",y_inc);
taxe_inc=500000;
printf("\n\t\t maximum income for taxe %.2f\n",taxe_inc);
taxe_rate=5;
printf("\n\t\t taxe rate for yearly income %.1f percent \n",taxe_rate);
float incom_taxe;
incom_taxe=(y_inc*5)/100;

if(y_inc>=taxe_inc)
          //>= - greater than equal too
     {  printf("\n\t\ty_inc is greater than equal to taxe_inc\n");
        printf("\n\t\tincome taxe income is 500000 or above\n");
        printf("\t\tso substric taxe rate 5 percent");
        printf("\n\n\t\t after income taxe is %.2f",incom_taxe);


      }



}