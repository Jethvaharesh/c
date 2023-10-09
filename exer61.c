// * * * * *
//  * * * *
//   * * *
//    * *
//     *
#include <stdio.h>
void main()
{
    int col, row, temp;
    row = 5;
    temp = 1;
    while (row >= 1)
    {
        col = 1;
        while (col <= temp) // 1<=1
        {
            printf(" ");

            col++;
        }
        col = 1;
        while (col <= row) // 1<=5
        {
            if (row == 5 | col == 1 || col == row)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
            col++;
        }
        printf("\n");
        row--;
        temp++;
    }
}
// #include <stdio.h>
//  void main()
//  {

//      int col,row,temp;
//      temp = 1;
//      row = 5;
//      while (row>=1)
//      {
//          col = 1;

//          while (col <= temp)
//          {
//              printf(" ");
//              col++;
//          }

//          col = 1;
//          while (col <= row)
//          {
//          if(row==5||col==1||col==row)
//             {
//             printf("* ");
//             }
//             else
//             {
//             printf("  ");
//             }
//              col++;
//          }
//          printf("\n");
//          row--;
//          temp++;
//     }
//  }