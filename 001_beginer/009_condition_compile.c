#include <stdio.h>
#define GNU 0
/* 009_condition_compile.c: compile following condition */
void main()
{
    printf("---------------------------\n");
#if GNU
    print(" GNU_C Compile !!\n");
#else
    printf(" Microsoft Visual C++ Compile !!\n");
#endif
    printf("---------------------------\n");
}
