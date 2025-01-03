#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = NULL; // Initialize pointer to NULL
    ptr = &x;        // Assign the address after initialization
    *ptr = 20;
    printf("%d\n", x);
    return 0;
}
