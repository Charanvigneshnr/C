#include<stdio.h>
// #define ab(x) x*x
// int main()
// {
//     int x;
//     printf("%d", ab(3+3));
//     return 0;
// }
// output will be 3+3*3+3 = 15
// int main()
// {
//     if (printf("chennai"))
//     {
//         printf("hello");
//     }
//     else
//     {
//         printf("bye");
//     }
//     return 0;
// }
// output will be chennaihello
int main()
{
    int a[3]={1,2,3};
    for (int &b:a)
    printf("%d",b);
}
// output will be 123 in c++, error in c, because c doesn't support enhanced for loop