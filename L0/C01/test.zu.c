#include <stdio.h>
#include <stddef.h>
#include <string.h>

int main(void)
{
    size_t len = strlen("Hello, world!");
    size_t big = 123456789012345ULL;   // a very large number

    printf("Length of string: %zu\n", len);           // Correct
    printf("Big number: %zu\n", big);                 // Correct

    // Wrong ways (can cause problems):
    printf("%d\n", len);     // ← wrong, may truncate or warn
    printf("%lu\n", len);    // ← works on Linux but not portable

    return 0;
}
