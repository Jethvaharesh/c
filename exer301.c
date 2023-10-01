// 1, 5, 12, 22, 35, 51, 70, 92, 117, 145, 176 ... 3000//
#include <stdio.h>
void main()
{
    int num1, num2;
    num1 = 1;
    num2 = 1;

   while(num1<=3000)
    {
        printf("%d,", num1); // 1
        num2 = num2 + 3;     // 4
        num1 = num1 + num2;
    }
   
    // printf("%d,", num1); // 5
    // num2 = num2 + 3;     // 7
    // num1 = num1 + num2;
    // printf("%d,", num1); // 12
    // num2 = num2 + 3;     // 10
    // num1 = num1 + num2;
    // printf("%d,", num1);
}