#include <stdio.h>
void main()
{
    //  a program to get two digit number

    // ex : 25 and print like this first number 2 ans sencond nuumber 5 .

    // and print two five
    int number, first, second;
    printf("enter any two digit number:  ");
    scanf("%d", &number);

    if (number>99 || number<10)
    {
        printf("invalide number enter only two digit number");
    }

    else
    {
        printf("value of number%d\n", number); // 25

        first= number / 10;  // 2
        second = number % 10; // 5

        printf("first number is: %d and second number is %d\n",first,second);

        printf("first number is:  ");

        switch (first)
        {
        case 1:
            printf("ONE");
            break;

        case 2:
            printf("TWO");
            break;

        case 3:
            printf("THREE");
            break;

        case 4:
            printf("FOUR");
            break;

        case 5:
            printf("FIVE");
            break;

        case 6:
            printf("SIX");
            break;

        case 7:
            printf("SEVEN");
            break;

        case 8:
            printf("EIGHT");
            break;

        case 9:
            printf("NINE");
            break;
            ;

        case 0:
            printf("ZERO");
            break;

        default:
            printf("invalide input");
            break;
        }

        printf("    second number   ");

        switch (second)
        {
        case 1:
            printf("ONE");
            break;

        case 2:
            printf("TWO");
            break;

        case 3:
            printf("THREE");
            break;

        case 4:
            printf("FOUR");
            break;

        case 5:
            printf("FIVE");
            break;

        case 6:
            printf("SIX");
            break;

        case 7:
            printf("SEVEN");
            break;

        case 8:
            printf("EIGHT");
            break;

        case 9:
            printf("NINE");
            break;

        case 0:
            printf("ZERO");
            break;

        default:
            printf("invalide input");
            break;
        }
    }
}


