// tack stating number and ending number from user and print range . 
// 25,26,27,28,29,30....50;
#include<stdio.h>
void main()
{
    int num1,num2;

    printf("enter your starting number");
    scanf("%d",&num1);
    printf("\nenter your ending number");
    scanf("%d",&num2);
    

   while(num1<=num2)
    {
      printf("%d,",num1);
      num1=num1+1;
    }
    // printf("%d ",num1);
    // num1=num1+1;
    // printf("%d, ",num1);
    // num1=num1+1;


}