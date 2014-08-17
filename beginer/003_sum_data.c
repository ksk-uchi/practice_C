#include <stdio.h>
/* 003_sum_data.c: calculate total */

void main(void)
{
    int i, total, sumData(int);

    for (i = 2; i < 11; i++) {
        total = sumData(i);
        printf(" add (1 to %d)\t=>\t%d\n", i, total);
    }
}

int sumData(int i) /* calculate total until i from 1 */
{
    int total = 0;
    while(i > 0) {
        total = total + i;
        i--;
    }
    return total;
}
