#include <stdio.h>
#include <stddef.h>
#include <stdint.h>   // for SIZE_MAX

int main(void)
{
    printf("sizeof(size_t)      = %zu bytes\n", sizeof(size_t));
    printf("sizeof(unsigned long) = %zu bytes\n", sizeof(unsigned long));
    printf("SIZE_MAX            = %zu\n", SIZE_MAX);
    printf("Maximum addressable size ≈ 16 exabytes\n");

    return 0;
}
