#include<stdio.h>
struct Person
{
    char name[20];
    int roll_no;
    float marks;
    enum gender{
        Male,
        Female,
        Other
    } gen;
};
int main()
{
    struct Person Person_1 = {"Jim", 10, 34.5,Male}, Person_2;

    printf("Details of Person 1\n\n");

    printf("Name: %s\n", Person_1.name);
    printf("Roll no: %d\n", Person_1.roll_no);
    printf("Marks: %.2f\n", Person_1.marks);
    printf("gender:%d",Person_1.gen);

    printf("\n");

    printf("Enter name of Person_2: ");
    scanf("%s", Person_2.name);

    printf("Enter roll no of Person_2: ");
    scanf("%d", &Person_2.roll_no);

    printf("Enter marks of Person_2: ");
    scanf("%f", Person_2.marks);

    printf("Enter gender of Person_2:");
    scanf("%d",Person_2.gen);



    printf("\nDetails of Person_2\n\n");

    printf("Name: %s\n", Person_2.name);
    printf("Roll no: %d\n",Person_2.roll_no);
    printf("Marks: %.2f\n", Person_2.marks);
    printf("gender:%d",Person_2.gen);
}