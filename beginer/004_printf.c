#include <stdio.h>
/* 004_printf.c: practice to learn printf function */
void main()
{
    int     a = 123;
    char    b = 'A';
    float   c = 123.456;
    double  d = 123.456;
    char    cstr[] = "C Program !!";

    printf("a --> %d  b --> %c\n", a, b);
    printf("c --> %f  d --> %lf\n", c, d);
    printf("string cstr --> %s \n", cstr);
}
