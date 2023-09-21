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
  scanf("%.2f",&unit);
  printf("your monthly unit is %.2f",unit);

float amount,elect,price, totalb;



  if (unit<=100)
  {
    price=1;
    printf("price is %f",price);
    amount=unit*price;
    print("amount is %.2F",amount);

    taxe=(amount*5)/100;
    totalb=amount-taxe;
    printf("your bill is %.2f",totalb);


   }


        printf("\n\tgood by");

}