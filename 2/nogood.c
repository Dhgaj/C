/* nogood.c -- 有错误的程序 */ // 已将错误代码注释
#include <stdio.h>

// int main(void)
// (
//     int n, int n2, int n3;
//     n = 5;
//     /*  该程序有多处错误
//     n2 = n * n;
//     n3 = n2 * n2;
//     printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3)

//     return 0;
// )

int main()
{
    int n, n2, n3;

    n = 5;
    n2 = n * n;
    n3 = n2 * n;
    printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);

    return 0;
}