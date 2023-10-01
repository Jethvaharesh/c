// Check if a character is a vowel or a consonant
#include <stdio.h>
void main()
{
  char letter;
  printf("\n\tENTER YOUR LETTER: ");
  scanf("%c",&letter);
  printf("\n\tYOUR LETTER IS %c\n\n",letter);

  if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
  {

    printf("\n\tYOUR LETTER IS VOWEL");
  }

  else
  {

    printf("\n\tYOUR NEMBER IS CONSONANT ");
  }

  printf("\n\t\tGOOD BY");
}