// write  program to find area of three triangle and check smaller .
#include <stdio.h>
void main()
{
  int height1, base1, area1, height2, base2, area2, height3, base3, area3;
  printf("enter height1:  ");
  scanf("%d", &height1);
  printf(" enter  base1:    ");
  scanf("%d", &base1);
  area1=(height1*base1)/2;
  printf("\nyour area1 of triangle is %d \n\n",area1);

  printf("enter height2:  ");
  scanf("%d",&height2);
  printf("enter base2:  ");
  scanf("%d",&base2);
  area2=(height2*base2)/2;
  printf("\nyour area2 of triangle  is %d \n\n",area2);

  printf("enter height3: ");
  scanf("%d",&height3);
  printf("enter base3: ");
  scanf("%d",&base3);
  area3=(height3*base3)/2;
  printf("\nyour area3 of triangle is %d\n\n",area3);

  if(area1<=area2) 
  {
    if  (area1<=area3)
    {
      printf("\narea 1 is smaller than area 2 and area 3\n");
    
    }

    else 
    {
        if(area1==area3)
        { 
            printf("area 1 is same of area 3");
        }
         
        else 
        {
           printf("area 1 is smaller than area 2 nd area 3 ");
        }

    }
  }

  else if(area2<=area3)
  {  
    if (area2<=area1)
    {
       printf("\narea 2 is smaller than area 3 and area 1\n");
    }
    else
    {
      if(area2==area3)
      {
       printf("area 2 is sam of area 3");
      }
      else
      {
       printf("\narea 2 is smaller than area 3 and area 1 ");
      }
    }
  }

  else if(area3<=area1)
  { 
    if(area3<=area2)
    {
      printf("area 3 is smaller than area 1 and area 2");
    }
    else 
    { 
      if (area3==area1)
       {
         printf("area 3 is same of area 1");
       }
      else
       {
         printf("area 3 is smaller than area 1 and area 2");

       }

    
    }
    
    

    
  }

  else
  {  
    if( (area1==area2) &&(area1==area3))
      {
       printf("all  triangle area is same ");
      }

    else
      {
      printf("area 1 is same of area 2");      
      }

  
    

  }
}
