#include<stdio.h>
 void main()
{  
    float m_inc ,y_inc,taxe_r,total_inc;

    printf("enter your monthly income:  ");
    scanf("%f",& m_inc);
    printf("your monthly income is %.2f",m_inc);

    y_inc=m_inc*12;
    printf("\nyour yearly income is%.2f",y_inc);


  if (y_inc<=300000)              
   {
     taxe_r=(y_inc*5)/100;
      y_inc=y_inc-taxe_r;
     printf("your yearly income is%.2f",y_inc);
   }

   else if(y_inc>=300000 && y_inc<=500000)
    {
      taxe_r=(y_inc*10)/100;
      y_inc=y_inc-taxe_r;
     printf("your yearly income is%.2f",y_inc);

    }

   else if (y_inc>=500000 &&  y_inc<=800000);
    {
      taxe_r=(y_inc*20)/100;
      y_inc=y_inc-taxe_r;
      printf("your yearly income is%.2f",y_inc);

    }
   
   else
   {
      taxe_r=(y_inc*30)/100;
      y_inc=y_inc-taxe_r;
      printf("your yearly income is%.2f",y_inc);

   }
     printf("\n\t GOOD BY");
   
}


