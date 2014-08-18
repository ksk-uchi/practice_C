#include <stdio.h>
/* 005_scanf.c: practice to learn scanf */
void main()
{
    int age;
    char name[20];
    printf("\nAge ? ");  scanf("%d", &age);
    printf("name ? "); scanf("%s", name);

    printf("\n[ %d  %s ]\n", age, name);
}
