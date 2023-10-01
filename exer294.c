//1 , 8 , 27 , 64 ,125,...1000.
#include<stdio.h>
void main()
{ 
    int num1,num2;
    
    num1=1;
    num2=1;
    
    while(num2<=1000) 
    {
      printf("%d,",num2);//1
      num1=num1+1;
      num2=num1*num1*num1;
    }
    
}

