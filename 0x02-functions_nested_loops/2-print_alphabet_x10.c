#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10()
{
    int i = 0;
    char c;
    for (i = 0; i < 10;i++)
        {
            c = 'a';
            while (c <= 'z')
                {
                    _putchar(c);
                    c++;
                }
                _putchar('\n');
        }
}
