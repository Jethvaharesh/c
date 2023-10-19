// wrire a program to given menu

// 1 for find bmi

// 2 for find area of triangle

// 3 for find area of cylinder

// 4 for find squre of given

// 5 for find zodiac Sign

#include <stdio.h>

float Bmi(float wt, float ht)
{
    float Bmi = 0;
    Bmi = wt / (ht * ht);
    return Bmi;
}
int Area(int height, int base)
{
    int Area = 0;
    Area = (height * base) / 2;
    return Area;
}
float Cyl(float pi, float r, float height)
{
    float Cyl = 0;
    Cyl = pi * (r * r) * height;
    return Cyl;
}
int Squre(int number)
{
    int Squre = 0;
    Squre = number * number;
    return Squre;
}

void main()
{
    float weight, f_to_m, i_to_m, height, bmi, r, cyl, pi;
    pi = 3.1415926;
    int number, foot_h, inch_h, base, area, squre, month, date;
    do
    {
        printf("Choose number for Oparetion \n\n");
        printf(" 1 for find bmi \n");
        printf(" 2 for find arae of triangle \n");
        printf(" 3 for find arae of cylinder  \n");
        printf(" 4 for find squre of given number  \n");
        printf(" 5 for find zodiac sign\n");
        printf("\n Enter Number : ");
        scanf("%d", &number);

        float weight, f_to_m, i_to_m, height, bmi, r, cyl, pi;
        pi = 3.1415926;
        int foot_h, inch_h, base, area, squre, month, date;
        // if (number <= 6 && number >= 1)

        switch (number)
        {
        case 1:
            printf("Bmi of given number \n");
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
            // bmi = weight / (height * height);
            bmi = Bmi(weight, height);
            printf("Your bmi is %.2f   \n\n", bmi);
            break;

        case 2:
            printf("Area of triangle \n");
            printf("enter value of height: ");
            scanf("%f", &height);
            printf("enter value of base:  ");
            scanf("%d", &base);
            area = Area(height, base);
            printf("\nYour arae of triangle is %d \n\n", area);
            break;

        case 3:
            printf("Area of cylinder\n");
            printf("enter value of radius :  ");
            scanf("%f", &r);
            printf("enter value of height:  ");
            scanf("%f", &height);
            cyl = Cyl(pi, r, height);
            printf("\nYour cylinder is %.2f \n\n", cyl);
            break;

        case 4:
            printf("Squre of given number\n");
            printf("enter value of number:  ");
            scanf("%d", &number);
            squre = Squre(number);
            printf("Squre of given number is %d \n\n", squre);
            break;
        case 5:
            printf("Find of zodiac sign\n");
            printf(" enter value of month");
            scanf("%d", &month);
            printf("enter value of date ");
            scanf("%d", &date);

            printf("\n value of month:%d\n\n", month);
            printf("value of date:%d \n\n", date);

            if ((month == 3 && date >= 21 && date <= 31) || (month == 4 && date >= 1 && month <= 19))
            {
                printf("symbole the ram and zodiac sign is arias"); // 1
            }

            else if ((month == 4 && date >= 20 && date <= 30) || (month == 5 && date >= 1 && date <= 20))
            {
                printf("symbole the bull and zodiac sign is taurus"); // 2
            }

            else if ((month == 5 && date >= 21 && date <= 31) || (month == 6 && date >= 1 && date <= 20))
            {
                printf("symbole the twins and zodiac sign is gemini"); // 3
            }

            else if ((month == 6 && date >= 21 && date <= 30) || (month == 7 && date >= 1 && date <= 22))
            {
                printf("symbole the crab and zodiac sign is cancer"); // 4
            }

            else if ((month == 7 && date >= 23 && date <= 31) || (month == 8 && date >= 1 && date <= 22))
            {
                printf("symbole the lion and zodiac sign is leo"); // 5
            }

            else if ((month == 8 && date >= 23 && date <= 31) || (month == 9 && date >= 1 && date <= 22))
            {
                printf("symbole the virgin and zodiac sign is virgo"); // 6
            }

            else if ((month == 9 && date >= 23 && date <= 30) || (month == 10 && date >= 1 && date <= 22))
            {
                printf("symbole the scales and zodiac sign is libra"); // 7
            }

            else if ((month == 10 && date >= 23 && date <= 31) || (month == 11 && date >= 1 && date <= 21))
            {
                printf("symbole the scorpion and zodiac sign is scorpio"); // 8
            }

            else if ((month == 11 && date >= 22 && date <= 30) || (month == 12 && date >= 1 && date <= 21))
            {
                printf("symbole the archer and zodiac sign is saggitarius"); // 9
            }

            else if ((month == 12 && date >= 22 && date <= 31) || (month == 1 && date >= 1 && date <= 19))
            {
                printf("symbole the goat and zodiac sign is capricorn"); // 10
            }

            else if ((month == 1 && date >= 20 && date <= 31) || (month == 2 && date >= 1 && date <= 18))
            {
                printf("symbole the the water bearer and zodiac sign is aquarius"); // 11
            }

            else if ((month == 2 && date >= 19 && date <= 29) || (month == 3 && date >= 1 && date <= 20))
            {
                printf("sumbole the fishes and zodiac sign is pisces"); // 12
            }

            else
            {
                printf("invalide input");
            }
            break;

        default:
            printf("invalide input");
            break;

            printf("\ngood by");
        }
        printf("\n\nIf Exit  then Enter  6  : << ");
        scanf("%d", &number);

    } while (number != 6);

    // 1 bmi = weight / (height * height);
    // printf("Bmi of given number \n");
    // printf("Enter Weight  in kg: ");
    // scanf("%f", &weight);
    // printf("Enter Height in Foot : ");
    // scanf("%d", &foot_h);
    // printf("Ente Height in Inche : ");
    // scanf("%d", &inch_h); // print value
    // printf("\nWeight : %.2f Kg\n", weight);
    // printf("\nFoot   : %d  \n", foot_h);
    // printf("\nInch   : %d \n", inch_h);

    // f_to_m = foot_h / 3.281;
    // // printf(" %f ", f_to_m);
    // i_to_m = inch_h / 39.37;
    // // printf(" %f ", i_to_m);
    // height = f_to_m + i_to_m;
    // printf("\nHeight : %.2f m \n", height);
    // bmi = Bmi(weight, height);
    // printf("your bmi is %.2f   \n\n", bmi);

    // // 2  height*base/2;
    // printf("Area of triangle \n");
    // printf("enter value of height: ");
    // scanf("%f", &height);
    // printf("enter value of base:  ");
    // scanf("%d", &base);
    // area = Area(height, base);
    // printf("\nyour arae of triangle is %d \n\n", area);

    // // 3 pi(r*r)h;
    // printf("Area of cylinder\n");
    // printf("enter value of radius :  ");
    // scanf("%f", &r);
    // printf("enter value of height:  ");
    // scanf("%f", &height);
    // cyl = Cyl(pi, r, height);
    // printf("\nyour cylinder is %.2f \n\n", cyl);

    // // 4 squre=number*number;
    // printf("Squre of given number\n");
    // printf("enter value of number:  ");
    // scanf("%d", &number);
    // squre = Squre(number);
    // printf("squre of given number is %d \n\n", squre);

    // // 5  zodiac sign..
    // printf("Find of zodiac sign\n");
    // printf(" enter value of month");
    // scanf("%d", &month);
    // printf("enter value of date ");
    // scanf("%d", &date);

    // printf("\n value of month:%d\n\n", month);
    // printf("value of date:%d \n\n", date);

    // if ((month == 3 && date >= 21 && date <= 31) || (month == 4 && date >= 1 && month <= 19))
    // {
    //     printf("symbole the ram and zodiac sign is arias"); // 1
    // }

    // else if ((month == 4 && date >= 20 && date <= 30) || (month == 5 && date >= 1 && date <= 20))
    // {
    //     printf("symbole the bull and zodiac sign is taurus"); // 2
    // }

    // else if ((month == 5 && date >= 21 && date <= 31) || (month == 6 && date >= 1 && date <= 20))
    // {
    //     printf("symbole the twins and zodiac sign is gemini"); // 3
    // }

    // else if ((month == 6 && date >= 21 && date <= 30) || (month == 7 && date >= 1 && date <= 22))
    // {
    //     printf("symbole the crab and zodiac sign is cancer"); // 4
    // }

    // else if ((month == 7 && date >= 23 && date <= 31) || (month == 8 && date >= 1 && date <= 22))
    // {
    //     printf("symbole the lion and zodiac sign is leo"); // 5
    // }

    // else if ((month == 8 && date >= 23 && date <= 31) || (month == 9 && date >= 1 && date <= 22))
    // {
    //     printf("symbole the virgin and zodiac sign is virgo"); // 6
    // }

    // else if ((month == 9 && date >= 23 && date <= 30) || (month == 10 && date >= 1 && date <= 22))
    // {
    //     printf("symbole the scales and zodiac sign is libra"); // 7
    // }

    // else if ((month == 10 && date >= 23 && date <= 31) || (month == 11 && date >= 1 && date <= 21))
    // {
    //     printf("symbole the scorpion and zodiac sign is scorpio"); // 8
    // }

    // else if ((month == 11 && date >= 22 && date <= 30) || (month == 12 && date >= 1 && date <= 21))
    // {
    //     printf("symbole the archer and zodiac sign is saggitarius"); // 9
    // }

    // else if ((month == 12 && date >= 22 && date <= 31) || (month == 1 && date >= 1 && date <= 19))
    // {
    //     printf("symbole the goat and zodiac sign is capricorn"); // 10
    // }

    // else if ((month == 1 && date >= 20 && date <= 31) || (month == 2 && date >= 1 && date <= 18))
    // {
    //     printf("symbole the the water bearer and zodiac sign is aquarius"); // 11
    // }

    // else if ((month == 2 && date >= 19 && date <= 29) || (month == 3 && date >= 1 && date <= 20))
    // {
    //     printf("sumbole the fishes and zodiac sign is pisces"); // 12
    // }

    // else
    // {
    //     printf("invalide input");
    // }

    // printf("\ngood by");
}
