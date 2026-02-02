// Program to display student details using structure

#include <stdio.h>

struct student
{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    struct student s;

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nStudent Details:\n");
    printf("Roll: %d\nName: %s\nMarks: %.2f", s.roll, s.name, s.marks);

    return 0;
}
