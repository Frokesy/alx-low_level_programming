#include <stdio.h>

int main() {
    int first = 1;
    int second = 2;
    int sum = 0;
    while (second <= 4000000) {
        if (second % 2 == 0) {
            sum += second;
        }
        int temp = second;
        second += first;
        first = temp;
    }
    printf("%d\n", sum);
    return 0;
}
