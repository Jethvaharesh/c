

#include <stdio.h>
float bodymi(float weight,float height)
{   float bodymi=0;
    bodymi=(weight/(height*height));
    return bodymi;
}

void main()
{
    int number;

    printf("Choose number for Oparetion \n\n");
    printf(" 1 for Addition \n");
    printf(" 2 for Subtraction \n");
    printf(" 3 for Multiplication  \n");
    printf(" 4 for Division  \n");
    printf("\n Enter Number : ");
    scanf("%d", &number);

    
    float weight, f_to_m, i_to_m, height, bmi;
    int foot_h, inch_h;

    printf("Enter Weight  in kg: ");
    scanf("%f", &weight);
    printf("Enter Height in Foot : ");
    scanf("%d", &foot_h);
    printf("Ente Height in Inche : ");
    scanf("%d", &inch_h);

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
    bmi=bodymi(weight,height);
    
}