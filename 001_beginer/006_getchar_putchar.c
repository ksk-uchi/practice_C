#include <stdio.h>
/* 006_getchar_putchar.c: practice to learn getchar(), putchar() */
void main()
{
    int c;

    for (c = 'A'; c <= 'Z'; c++) {
        putchar(c);
    }
    printf("\n");

    for (c = 'Z'; c >= 'A'; c--) {
        putchar(c);
    }
    printf("\n\n");

    printf("Input Alphabet\n");
    printf("If you input 'e' you can escape: \t");
    while (((c = getchar()) != EOF)) {
        putchar(c);
        if (c == 'e') {
            printf("\n");
            break;
        }
    }
}
