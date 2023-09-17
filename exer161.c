#include<stdio.h> 
void main()

{ 
      printf("\t\t **** calculate of simple interest ****");
      // A=P(1+rt)//amount,principle,rate,time;
      int principle ,rate,time;

      printf("\n\n\t\t       principle = ");
      scanf("%d",&principle);
      printf("\t\trate in percent. = ");
      scanf("%d",&rate);
      printf(" \t\t    time in year = ");
      scanf("%d",&time);
      
      float a;
      a=(principle*rate*time)/100;
      printf("\n\t\t  SIMPLE INTEREST=%.2f",a);
      
       
}