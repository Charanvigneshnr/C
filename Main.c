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
    struct student s;
    int id1;
    float cgpa1;
    char name1[100];
    id1 = s.id = 21;
    cgpa1 = s.cgpa = 8.768;
    strcpy(s.name, "Charan Vignesh");
    strcpy(name1, s.name);
    printf("Student ID = %u\nStudent Name = %u\nStudent CGPA = %u\n", &id1, &name1, &cgpa1);
}
