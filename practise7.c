// find of additional of number use array.
#include <stdio.h>
void main()
{
    int size, i, sum;

    printf("enter value of size of number : ");
    scanf("%d", &size);

    int number[size];

    for (i = 0; i < size; i++)
    {
        printf("enter value of number %d : ", i + 1);
        scanf("%d", &number[i]);
    }

    for (i = 0; i < size; i++)
    {
        printf("value of number %d :%d \n", (i + 1), number[i]);
    }
    sum = 0;

    for (i = 0; i < size; i++)
    {
        sum = sum + number[i];
    }

    printf("addition of all number :%d ", sum);
}
