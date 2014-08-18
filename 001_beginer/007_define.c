#include <stdio.h>
#define M main()
#define LOOP while(1)
#define INPUT scanf
#define PRINT printf
/* 007_define.c: practice about define */
void M
{
    int a, b;

    LOOP {
        PRINT("\ndata in a, b ?\n");
        INPUT("%d, %d", &a, &b);

        if (a < b) PRINT("... a < b !\n");
        else if (a == b) PRINT("... a == b !\n");
        else PRINT("... a > b !\n");
    }
}
