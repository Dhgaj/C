#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
    size_t i;
    for (i = 0; i < len; i++)
    {
        printf("%.2x ", start[i]);
    }
    printf("\n");
}

void show_int(int x)
{
    show_bytes((byte_pointer)&x, sizeof(int));
}

void show_float(float x)
{
    show_bytes((byte_pointer)&x, sizeof(float));
}

void show_pointer(void *x)
{
    show_bytes((byte_pointer)&x, sizeof(void *));
}

int main()
{
    int int_var = 12345;
    float float_var = 123.45;
    int *ptr_var = &int_var;

    printf("Integer:\n");
    show_int(int_var);

    printf("Float:\n");
    show_float(float_var);

    printf("Pointer:\n");
    show_pointer(ptr_var);

    return 0;
}