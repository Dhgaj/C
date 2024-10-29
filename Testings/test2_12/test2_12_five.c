#include <stdio.h>

void br();
void ic();

int main()
{
    br();
    printf(", ");
    ic();
    printf("\n");
    br();
    printf("\n");
    ic();
}

void br()
{
    printf("Brzail, Russia");
}

void ic()
{
    printf("India, China");
}