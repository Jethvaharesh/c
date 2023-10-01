// Write a program to display zodiac symbol & given zodiac sign from given birth day and month as per following criteria.
// https://i.pinimg.com/564x/43/aa/50/43aa50c918f3bd03abb71b6d4aaf93c7.jpg
#include <stdio.h>
void main()
{
  int month, date;

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
   
    printf("\ngood by");

    //  printf("sumbole the bull and zodiac sign is taurus");
  // } else if (month == 5 && date >= 1 && date <= 20)
  // {
  //   printf("sumbole the bull and zodiac sign is taurus");
  // } else if (month == 5 && date >= 1 && date <= 20)
  // {
  //   printf("sumbole the bull and zodiac sign is taurus");
  // } else if (month == 5 && date >= 1 && date <= 20)
  // {
  //   printf("sumbole the bull and zodiac sign is taurus");
  // } else if (month == 5 && date >= 1 && date <= 20)
  // {
  //   printf("sumbole the bull and zodiac sign is taurus");
  // } else if (month == 5 && date >= 1 && date <= 20)
  // {
  //   printf("sumbole the bull and zodiac sign is taurus");
  // } else if (month == 5 && date >= 1 && date <= 20)
  // {
  //   printf("sumbole the bull and zodiac sign is taurus");
  // } else if (month == 5 && date >= 1 && date <= 20)
  // {
  //   printf("sumbole the bull and zodiac sign is taurus");
  // } else if (month == 5 && date >= 1 && date <= 20)
  // {
  //   printf("sumbole the bull and zodiac sign is taurus");
  // } else if (month == 5 && date >= 1 && date <= 20)
  // {
  //   printf("sumbole the bull and zodiac sign is taurus");
  // } else if (month == 5 && date >= 1 && date <= 20)
  // {
  //   printf("sumbole the bull and zodiac sign is taurus");
  // }
}