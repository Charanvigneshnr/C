#include<stdio.h>
int main()
{
    system("cls");
    int x = 1;
    int y = 2;
    printf("Before swap:\n%d\t%d\n", x, y);
    swapA(x, y);
    printf("Pass by value:\n%d\t%d\n", x, y);
    swapB(&x, &y);
    printf("Pass by reference:\n%d\t%d\n", x, y);
}

void swapA(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swapB(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}