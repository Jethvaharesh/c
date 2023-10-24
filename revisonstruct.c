#include <stdio.h>
struct student
{
    char name[24];
    int age;
    float weight;
    char number[10];
    char email[64];
};

void main()
{
    int size, i;
    printf("enter number of student : ");
    scanf("%d", &size);

    struct student s[size];
    for (i = 0; i < size; i++)
    {
        printf("enter value of student %d :\n", i + 1);

        printf("enter name :");
        scanf("%s", &s[i].name);
        printf("enter age : ");
        scanf("%d", &s[i].age);
        printf("enter weight  : ");
        scanf("%f", &s[i].weight);
        printf("enter numbre : ");
        scanf("%s", &s[i].number);
        printf("enter email : ");
        scanf("%s", &s[i].email);


    }

    for (i = 0; i < size; i++)
    {
        printf("\n||||||||||||||||student %d||||||||||||||||||\n", i + 1);
        printf("\tNo.    :%d\n", i + 1);
        printf("\tName   :%s\n", s[i].name);
        printf("\tAge    :%d\n", s[i].age);
        printf("\tWeight :%.2f\n", s[i].weight);
        printf("\tNumber :%s\n", s[i].number);
        printf("\tEmail  :%s\n", s[i].email);
    }
}