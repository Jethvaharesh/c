// write a program to check number1 small.
#include <stdio.h>
void main()
{
  printf("\t\twrite program to check number1 small.\n\n");
  int number1, number2;
  printf("\n\t\tENTER VALUE OF NUMBER 1  ");
  scanf("%d", &number1);
  printf("\n\t\tENTER VALUE OF NUMBER 2  ");
  scanf("%d", &number2);

  if (number1 < number2)
  {
    printf("\n\t\tnumber 1 is smaller than number 2 \n");

    printf("\t\tgood by");
  }
}