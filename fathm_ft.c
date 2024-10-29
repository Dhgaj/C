/* fathm_ft.c -- 把2英寻转换成英尺 */
#include <stdio.h>

int main(void)
{
    int feet, fathoms;

    fathoms = 2;
    feet = fathoms * 6;
    printf("There %d feet in %d fathoms \n", feet, fathoms);
    printf("Yes, I said %d feet! \n", fathoms * 6);

    return 0;
}