#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;
    printf("%p %d\n", p, *p);
    return 0;
}
