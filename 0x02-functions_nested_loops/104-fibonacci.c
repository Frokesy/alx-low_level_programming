#include <stdio.h>

int main(void) {
    unsigned int a = 1, b = 2, c, count = 2;
    printf("%u, %u, ", a, b);
    while (count < 98) {
        c = a + b;
        a = b;
        b = c;
        count++;
        if (count == 98)
            printf("%u\n", c);
        else
            printf("%u, ", c);
    }
    return 0;
}
