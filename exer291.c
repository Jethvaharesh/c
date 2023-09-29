//1, 6, 15, 28, 45, 66, 91, 120, 153, 190, 231 .. 10000
#include<stdio.h>
void main()
{
   int num=1,num2=1;
  
  while(num<=10000)
   {
    printf("%d, ",num);
    num2=num2+4;
    num=num+num2;
   }
   




}