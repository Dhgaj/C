/* stillbad.c -- 一个错误的程序 */
#include <stdio.h>

int main()
{
    int n, n2, n3;
    n = 5;
    n2 = n * n;
    // 语义错误
    n3 = n2 * n2; // n3 本应为 n 的立方但是却算成了 n 的四次方 --> n3 = n2 * n;
    printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);

    return 0;
}