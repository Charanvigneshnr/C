#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[50];
    float cgpa;
};

int main()
{
    system("cls");
    struct student s[100];
    s[0].id = 1;
    strcpy(s[0].name, "Charan");
    s[0].cgpa = 8.768;

    s[1].id = 2;
    strcpy(s[1].name, "Vignesh");
    s[1].cgpa = 8.768;

    struct student s2 = {3, "N R ", 8.768};

    // int i;
    // for (i = 0; i < 3; i++)
    // {
    //     printf("Student %d\nName: %s\nID: %d\nCGPA: %.2f\n\n", i + 1, s[i].name, s[i].id, s[i].cgpa);
    // }
    printf("Name: %s\nID: %d\nCGPA: %.2f\n\n", s2.name, s2.id, s2.cgpa);
    return 0;
}

// 8.47 HRS
