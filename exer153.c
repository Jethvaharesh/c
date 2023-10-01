// wrire a program to find area  of cylinder take input from user using scanf .

#include<stdio.h>
void main()
   //area of cylinder a=2pirh+2pirr

{
    float radius,height,pi,area;//r=10,heghit=35;
    printf("\t******** Area of cylinder After value take from user*********");
    printf(" \n\t radius is ");
    scanf("%f",&radius); 
    printf("   \t height is  ");
    scanf("%f",&height);
    printf("    \t  pi    is  ");
    scanf("%f",&pi);
    area=(2*pi*radius*height)+(2*pi*(radius*radius));
    printf("\n\tArea of Cylinder is %.2f ",area);
    
}