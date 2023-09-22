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

  int unit,price;
  float amount,taxe,tbill;

  printf("enter your monthly unit: ");
  scanf("%d",&unit);
  printf("value of unit: %d\n",unit);
  price=0;
  
  if (unit > 0 && unit<=100)
  {
     price=1;

  }
  else if(unit>100 && unit<=200)
  {
    price=2;
  }
  else if(unit>200 && unit<=300)
  {
    price=3;
  }
  else if(unit>300 && unit<=400)
  {
    price=4;
  }
  else if(unit>400)
  {
    price=5;
  }
  else
  {
    price=0;
  }

   if(unit==0)
  {
    printf("invalide input");
  }

  else
  { 
     amount=unit*price;
     taxe=(amount*0.05);
     tbill=amount+taxe;
     printf("\nyour monthly E bill is: %.2f\n",tbill);

  }


        printf("\n\tgood by");

}