// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
#include <stdio.h>
void main()
{
    int col, row;

    
    col = 1;
    row=1;
    while (row <= 5)
    {
        col = 1;
        while (col <= row)
        {
            printf("%d",col);
            col++;
        }
        printf("\n");
        row++;
        
    }
}
