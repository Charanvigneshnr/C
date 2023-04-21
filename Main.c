#include <stdio.h>
#include <string.h>

typedef struct student
{
    int id;
    char name[50];
    float cgpa;
} paiyan;

int main()
{
    system("cls");
    paiyan s = {21, "Charan Vignesh", 8.768};
    paiyan *ptr = &s;
    printf("%.2f", ptr->cgpa);
    return 0;
}
