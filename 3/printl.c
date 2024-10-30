/* printl.c -- 这是一个有问题的代码 */
#include <stdio.h>

int main()
{
    int ten = 10;
    int two = 2;

    printf("Doing is right: ");
    printf("%d minus %d is %d \n", ten, 2, ten - two);
    printf("Doing is wrong: ");
    printf("%d minus %d is %d \n", ten); // 缺少参数

    return 0;
}