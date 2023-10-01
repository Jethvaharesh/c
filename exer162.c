#include<stdio.h>
void main()
{
    //find electricity and bill take unit,amount,take rate;
    printf("\t\t\t***********Electricity Bill***********");
    int unit,price;//u=,a=7;
    printf("\n\t\t\t  Unit= ");
    scanf("%d",&unit);
    printf("\t\t\tunit price= ");
    scanf("%d",&price);
    int fc;//fc=0.85;
    printf("\t\tFix charge /u = ");
    scanf("\t\t%d",&fc);
    float eb;
    eb= unit*fc*price;
    printf("\t\t    Ele. Bill = %.2f",eb);



}