#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet_x10();
    return (0);
}

void print_alphabet_x10(void) {
    int i = 0;
    while (i < 10) {
        char letter = 'a';
        while (letter <= 'z') {
            _putchar(letter);
            letter++;
        }
        i++;
    }
    _putchar('\n');
}