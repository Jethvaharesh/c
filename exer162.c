#include<stdio.h>
void main()
{
    //find electricity and bill take unit,amount,take rate;
    printf("\t\t\t***********Electricity Bill***********");
    int unit,amount;//u=,a=7;
    printf("\n\t\t\t  Unit= ");
    scanf("%d",&unit);
    printf("\t\t\tAmount= ");
    scanf("%d",&amount);
    int fc;//fc=0.85;
    printf("\t\tFix charge /u = ");
    scanf("\t\t%d",&fc);
    float eb;
    eb= unit*fc*amount;
    printf("\t\t    Ele. Bill = %.2f",eb);



}