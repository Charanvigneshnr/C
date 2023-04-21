#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    system("cls");
    int x;
    printf("Enter the number of rows: ");
    scanf("%d", &x);
    int i;
    float *ptr = (float *)calloc(sizeof(float) * x, 0.00);
    printf("\n");
    for (i = 0; i < x; i++)
    {
        printf("Enter the %dth element: ", i + 1);
        scanf("%f", &ptr[i]);
    }
    printf("\n");
    for (i = 0; i < x; i++)
    {
        printf("Number %d: %.2f\n", i + 1, ptr[i]);
    }
    return 0;
}
