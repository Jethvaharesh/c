//     *
//    * *
//   * * *
//  * * * *
// * * * * *
#include <stdio.h>
void main()
{    int col,row,temp;
    temp=5;
    row=1;
  while(row<=5)
    {
       col = 1;
        while (col<= temp)
        {
            printf(" ");
            col++;
        }
        col = 1;
        while (col<=row)
        {
            printf("* ");
            col++;
        }
        printf("\n");
        row++;
        temp--;
    
    
    }






}