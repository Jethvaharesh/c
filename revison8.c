#include <stdio.h>
void main()
{
    int marks[5][5], i, j;

    for (i = 0; i < 5; i++)
    {
        printf("enter student %d marks: \n",(i+1));

        for (j = 1; j < 5; j++)
        {
            printf("enter marks of subject %d : ",(j+1));
            scanf("%d", &marks[i][j]);
        }
    }
}