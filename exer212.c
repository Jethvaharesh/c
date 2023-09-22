#include<stdio.h>
 void main()

//   Write a programe to findout income tax based on given condition take monthly income as input 
// yearly income     tax rate
// <3,00,000         5%  

// >=3,00,000
// <5,00,000         10%  

// >=5,00,000
// <8,00,000         20%
// >=8,00,000        30%
{  
    float m_inc ,y_inc,taxe,taxe_r,total_inc;

    printf("enter your monthly income:  ");
    scanf("%f",& m_inc);
    printf("\nmonthly income is:  %f\n",m_inc);
    y_inc=m_inc*12;
    printf("\nyour yearly income is %f\n",y_inc);

    if (y_inc<0 && y_inc>=300000)
    {
        taxe_r=5;
    }

    else if(y_inc>=300000 && y_inc<500000)
    {
        taxe_r=10;
    }

    else if(y_inc>=500000 && y_inc<800000)
    {
        taxe_r=20;
    }

    else if(y_inc>800000 )
    {
        taxe_r=30;
    }

    else if (y_inc<=0)
    {
        printf("\ninvalide input\n");
    }

    if (y_inc==0)
    {
        printf("\nenter value of income\n");
    }

    else
    {
        taxe= (y_inc*taxe_r)/100;
        total_inc=(y_inc - taxe);
        printf("\nyour yearly income after pay taxe is:  %.2f\n",total_inc);



    }
        printf("\n good by\n");
}


