#include <stdio.h>

typedef struct
{
    float Realpart;
    float Imagepart;
} Complex;

void Create(Complex *C, float x, float y)
{
    C->Realpart = x;
    C->Imagepart = y;
}

float GetReal(Complex C)
{
    return C.Realpart;
}

float GetImage(Complex C)
{
    return C.Imagepart;
}

Complex Add(Complex C1, Complex C2)
{
    Complex sum;
    sum.Realpart = C1.Realpart + C2.Realpart;
    sum.Imagepart = C1.Imagepart + C2.Imagepart;
    return sum;
}

Complex Sub(Complex C1, Complex C2)
{
    Complex sub;
    sub.Realpart = C1.Realpart - C2.Realpart;
    sub.Imagepart = C1.Imagepart - C2.Imagepart;
    return sub;
}

int main()
{
    Complex C1, C2, sum, difference;

    Create(&C1, 3.0, 4.0);
    Create(&C2, 1.0, 2.0);

    printf("C1: Real = %.2f, Image = %.2f\n", GetReal(C1), GetImage(C1));
    printf("C2: Real = %.2f, Image = %.2f\n", GetReal(C2), GetImage(C2));

    sum = Add(C1, C2);
    difference = Sub(C1, C2);

    printf("Sum: Real = %.2f, Image = %.2f\n", GetReal(sum), GetImage(sum));
    printf("Difference: Real = %.2f, Image = %.2f\n", GetReal(difference), GetImage(difference));

    return 0;
}