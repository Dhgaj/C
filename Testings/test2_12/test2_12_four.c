#include <stdio.h>

void jolly();
void deny();

int main()
{
    jolly();
    jolly();
    jolly();
    deny();
}

void jolly()
{
    printf("For he's a jolly good fellow! \n");
}

void deny()
{
    printf("Which nobody can deny! \n");
}