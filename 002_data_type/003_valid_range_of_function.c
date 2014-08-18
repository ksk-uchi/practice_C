#include <stdio.h>
/* 003_valid_range_of_function.c: practice to learn valid range of function */
int data = 128, func1(), func2();
static int w = 5, x = 50;

void main()
{
    int w = 1;
    static int x = 10;

    printf(".. %d, %d, %d\n", w, x, data);
    func1();
    printf(".. %d, %d, %d\n", w, x, data);
}

int func1()
{
    printf(".... %d, %d, %d\n", w, x, data);
    func2();

    int w = 2;
    static int x = 20;
    printf(".... %d, %d, %d\n", w, x, data);
    return 0;
}

int func2()
{
    int w = 3;
    static int x = 30;

    printf("...... %d, %d, %d\n", w, x, data);
    return 0;
}
