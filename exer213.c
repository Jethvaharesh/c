#include<stdio.h>
void main()
{
// also calculate 5% percentage energy charge on total bill amount & display total amount 
//  Write a C program to calculate final electricity bill based upon below given criteria. take monthly electricity unit from user as input. 
// units           price  per unit 
// <100            1
// >100 & <200     2 
// >200 & <300     3
// >300 & <400     4
// >400            5

float unit,price,taxe;

  printf("enter your monthly unit:");
  scanf("%f",&unit);
  printf("your monthly unit is %f",unit);
  
  if (unit<=100)
  {
     price=1;

  }


        printf("\n\tgood by");

}