#include <stdio.h>
/* 004_variable_initialized.c: practice to learn initialized */
int         ia = 12 * 31;
double      fa = 0.456;

void main()
{
    int         ib = 128;
    double      fb = 456.78 / 100.0;
    char        ca = 'A',
                cb = '\n';

    printf("ia --> %d       ib --> %d\n", ia, ib);
    printf("fa --> %lf      fb --> %lf\n", fa, fb);
    printf("ca --> %c       cb --> %c\n", ca, cb);
    printf("------------------ end.\n");
}
