#include <stdio.h>
#define VCPP
/* 010_ifdef.c: practice to learn ifdef */
void main()
{
    printf("---------------------------\n");
#ifdef PWC
    printf(" Power_C Compile !!\n");
#endif

#ifdef VCPP
    printf(" MicroSoft Visual C++ Compile !!\n");
#endif

#ifdef GNU
    printf(" GNU C Compile !!\n");
#endif
    printf("---------------------------\n");
}
