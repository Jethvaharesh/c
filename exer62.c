// 10 : 1 +2+3+4+5+6+7+8+9+10 = 55
#include<stdio.h>
void main()
{
    int i,num;
    i=1;
    printf("enter value of number:");
    scanf("%d",&num);
    for(i=1;i<=num;i=i+1)
    {
        
        printf("%d,",i);    }
}