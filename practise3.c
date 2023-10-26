// find smaller number than another number.
#include <stdio.h>
void main()
{
    int number1, number2;

    printf("enter number 1 : ");
    scanf("%d", &number1);
    printf("enter number 2 : ");
    scanf("%d",&number2);

    printf("value of number 1 :%d \n",number1);
    printf("value of number 2 :%d \n",number2);


    if(number1<number2)
    {
       printf("Number 1 is smaller  than number 2 \n");
    }

    else if(number2<number1)
    {
        printf("number 2 is smaller than number 1 \n");
    }
    else if (number1==number2)
    {
        printf("both are same  \n");
    }
    else
    {
        printf("invalide input");
    }
  
     printf("good by");

}