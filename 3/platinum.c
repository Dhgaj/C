/* platinum.c -- your weight in platinum */
#include <stdio.h>

int main(void)
{
    float weight; // 体重
    float value;  // 相较于黄金的价值

    printf("Are you worth your weight in platinum? \n");
    printf("Let's check it out! \n");
    printf("Please enter your weight in kg  \n");

    scanf("%f", &weight);
    value = 500 * weight * 123;

    printf("Your weight in platinum is worth $%.2f \n", value);
    printf("You are easily worth that! If platinum prices drop, ");
    printf("eat more to maintain your value!");

    return 0;
}