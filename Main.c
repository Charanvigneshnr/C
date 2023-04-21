#include <stdio.h>
#include <string.h>

typedef struct vector
{
    int x;
    int y;
} v;

int main()
{
    system("cls");
    v v1 = {5, 6};
    v v2 = {7, 8};
    int resX = v1.x + v2.x;
    int resY = v1.y + v2.y;
    printf("  %d i + %d j\n+", v1.x, v1.y);
    printf(" %d i + %d j\n=", v2.x, v2.y);
    printf("%d i + %d j\n", resX, resY);
    return 0;
}
