// wrire a program to given menu
// 1 for find bmi
// 2 for find area of triangle
// 3 for find area of cylinder
// 4 for find squre of given
// 5 for find zodiac Sign

#include <stdio.h>
void get_bmi()
{
    float weight, f_to_m, i_to_m, height, bmi, r, cyl, pi;
    pi = 3.1415926;
    int foot_h, inch_h, base, area, squre, month, date;

    printf("Enter Weight  in kg: ");
    scanf("%f", &weight);
    printf("Enter Height in Foot : ");
    scanf("%d", &foot_h);
    printf("Ente Height in Inche : ");
    scanf("%d", &inch_h); // print value
    printf("\nWeight : %.2f Kg\n", weight);
    printf("\nFoot   : %d  \n", foot_h);
    printf("\nInch   : %d \n", inch_h);

    f_to_m = foot_h / 3.281;
    // printf(" %f ", f_to_m);
    i_to_m = inch_h / 39.37;
    // printf(" %f ", i_to_m);
    height = f_to_m + i_to_m;
    printf("\nHeight : %.2f m \n", height);
    bmi = weight / (height * height);

    printf("Your bmi is %.2f   \n\n", bmi);

    if (bmi < 18.5 && bmi >= 0)
    {
        printf("\n\nYou are under weight.");
    }
    else if (bmi > 18.5 && bmi <= 25)
    {
        printf("\n\nYour weight is normal.");
    }
    else if (bmi > 25 && bmi < 30)
    {
        printf("\n\nYou are over weight.");
    }
    else if (bmi >= 30 && bmi < 35)
    {
        printf("\n\nYou are obese.");
    }
    else if (bmi >= 35)
    {
        printf("\n\nYou are extremly obese");
    }
    else
    {
        printf("Invalide Input \n");
    }

    printf("\n");
}
void get_araeoftriangle()
{
    float Area, height, base;
    printf("Area of triangle \n");
    printf("enter value of height: ");
    scanf("%f", &height);
    printf("enter value of base:  ");
    scanf("%f", &base);
    Area = (height * base) / 2;
    printf("\nYour arae of triangle is %.2f \n\n", Area);
}

void get_areaOfCylinder()
{
    float area, r, height, pi = 3.1415926;

    printf("Area of cylinder\n");
    printf("enter value of radius :  ");
    scanf("%f", &r);
    printf("enter value of height:  ");
    scanf("%f", &height);
    area = (2 * pi * r * height) + (2 * pi * (r * r));
    printf("\nYour cylinder is %.2f \n\n", area);
}
int get_Squre()
{
    int number, sq;
    printf("Enter Value of number ");
    scanf("%d", &number);
    sq = number * number;
    printf("Squre of Given number : %d \n\n", sq);
}

void get_ZodiacSign()
{
    int month, date;

    printf("Enter Value of month ");
    scanf("%d", &month);
    printf("Enter Value of date ");
    scanf("%d", &date);

    printf("\nValue of month : %d \n\n", month);
    printf("Value of date  : %d\n\n", date);

    if ((month == 3 && date >= 21 && date <= 31) || (month == 4 && date >= 1 && date <= 19))
    {
        printf("Symbol : The Ram and Zodiac sign : Aries \n");
    }

    else if ((month == 4 && date >= 20 && date <= 30) || (month == 5 && date >= 1 && date <= 20))
    {
        printf("Symbol : The Bull and Zodiac sign : Taurus \n");
    }

    else if ((month == 5 && date >= 21 && date <= 31) || (month == 6 && date >= 1 && date <= 20))
    {
        printf("Symbol : The twins and Zodiac Sign : Gemini \n");
    }

    else if ((month == 6 && date >= 21 && date <= 30) || (month == 7 && date >= 1 && date <= 22))
    {
        printf("Symbol : The Crabe and Zodiac Sign : Cencer \n");
    }

    else if ((month == 7 && date >= 23 && date <= 31) || (month == 8 && date >= 1 && date <= 22))
    {
        printf("Symbol : The Lion and Zodiac Sign : Leo \n");
    }

    else if ((month == 8 && date >= 23 && date <= 31) || (month == 9 && date >= 1 && date <= 22))
    {
        printf("Symbol : The virgin and Zodiac Sign : Virgo \n");
    }

    else if ((month == 9 && date >= 23 && date <= 30) || (month == 10 && date >= 1 && date <= 22))
    {
        printf("Symbol : The Scales and Zodiac Sign : Libra \n");
    }

    else if ((month == 10 && date >= 23 && date <= 31) || (month == 11 && date >= 1 && date <= 21))
    {
        printf("Symbol : The scopion and Zodiac Sign : Scorpio \n");
    }

    else if ((month == 11 && date >= 22 && date <= 30) || (month == 12 && date >= 1 && date <= 21))
    {
        printf("Symbol : The Archer and Zodiac Sign : Sagittiarius \n");
    }

    else if ((month == 12 && date >= 22 && date <= 31) || (month == 1 && date >= 1 && date <= 19))
    {
        printf("Symbol : The Goat and Zodiac Sign : Capricorn \n");
    }

    else if ((month == 1 && date >= 20 && date <= 31) || (month == 2 && date >= 1 && date <= 18))
    {
        printf("Symbol : The Water Bearer and Zodiac Sign : Aqurius \n");
    }

    else if ((month == 2 && date >= 19 && date <= 29) || (month == 3 && date >= 1 && date <= 20))
    {
        printf("Symbol : The Fishes and Zodiac Sign : pisces \n");
    }

    else
    {
        printf("Invalide Date and month \n");
    }
    printf("\n");
}

void main()
{
    int number = 0;

    while (number == 0)
    {
        printf("select number for Oparetion \n\n");
        printf(" 1 for find bmi \n");
        printf(" 2 for find arae of triangle \n");
        printf(" 3 for find arae of cylinder  \n");
        printf(" 4 for find squre of given number  \n");
        printf(" 5 for find zodiac sign\n");
        printf("\n choose Number : ");
        scanf("%d", &number);

        if (number == 1)
        {
            get_bmi();
        }

        else if (number == 2)
        {
            get_araeoftriangle();
        }

        else if (number == 3)
        {
           get_areaOfCylinder();
        }

        else if (number == 4)
        {
             get_Squre();
        }
        else if(number==5)
        {
            get_ZodiacSign();
        }
        else
        {
            printf("invalide chiose");
        }

        printf("\nIf continue  then Enter  0  : -->> ");
        scanf("%d", &number);
    }
}
