// number of student = ?

// get Value from user :

// name : 
// age : 
// Weight:
// Number : 
// Email :

// print Value : 

// |||||||||||||||||||||||student 1 ||||||||||||||||||||||||
#include<stdio.h>
struct student 
{
    char name;
    char age;
    float weight;
    char num;
    char email;
};
void get_detail(struct student d)
{   

    printf("enter name of student 1: ");
    scanf("%s",&d.name);
    printf("enter age of student  1: ");
    scanf("%s",&d.age);
    printf("enter weight of student 1: ");
    scanf("%f",&d.weight);
    printf("enter number of student 1: ");
    scanf("%s",&d.num);
    printf("enter name of student: ");
    scanf("%s",&d.email);
    printf("\n|||||||||||||||student  ");

    
}
void main()
{
    int size;
    printf("enter number of student: ");
    scanf("%d",&size);

    struct student d[size];

   
     printf(" enetr detail of student 1 : ");
     get_detail( student d);
   


}