/* bases.c -- 以十进制、八进制、十六进制打印十进制数100 */
#include <stdio.h>

int main()
{
    int num = 100;

    printf("dec = %d ; octal = %o ; hex = %x \n", num, num, num);
    printf("dex = %d ; octal = %#o ; hex = %#x \n", num, num, num);

    return 0;
}
