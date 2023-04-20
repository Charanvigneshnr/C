#include <stdio.h>

int main()
{
    system("cls");
    int a = 20;
    int *ptr = &a;
    int x = *ptr;
    int y = ptr;
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    return 0;
}
