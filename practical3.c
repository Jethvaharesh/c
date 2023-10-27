#include <stdio.h>
void main()
{
    int choise, number, num1, num2, add, mul, sub, divi, mod;

    number=204;
    printf("choose your operation \n\n");
    printf(" 1 for addition \n");
    printf(" 2 for multiplication \n");
    printf(" 3 for substriction \n");
    printf(" 4 fo division \n");
    printf(" 5 for module \n");
    scanf("%d", &choise);

    do
    {

        if (choise > 0 || choise < 5)
        {
            printf(" enter number 1 : ");
            scanf("%d", &num1);
            printf(" enter number 2 : ");
            scanf("%d", &num2);
        }
        else
        {
            printf(" invalide input  ");
        }

        switch (choise)
        {
        case 1:
            add = num1 + num2;
            printf("Your addition is %d ", add);
            break;

        case 2:

            mul = num1 * num2;
            printf("Your  multiplication is %d ", mul) ;
            break;

        case 3:
            if (num1 < num2)
            {
                sub = num2 - num1;
            }
            else
            {
                sub = num1 - num2;
            }
            printf(" Your substriction is %d ", sub);
            break;

        case 4:
            divi = num1 / num2;
            printf(" Your division is %d ", divi);
            break;

        case 5:
            mod = num1 / num2;
            printf("Your modul is %d ", mod);
            break;

        case 6:
            number = 204;
            break;

        default:
            printf("invalide input choose 1 to 5 number \n");
            break;
        }

        printf("\n if  continue enter -->6 \n ");
        scanf("%d",&number);

    } while (number != 404);
}