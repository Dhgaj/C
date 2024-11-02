/* charcode.c -- 显示字符的代码编号 */
#include <stdio.h>

int main()
{
    char ch;

    printf("Please enter a charcode. \n");
    scanf("%c", &ch);
    printf("The code for %c is %d. \n", ch, ch);

    return 0;
}