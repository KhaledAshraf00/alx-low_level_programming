#include "main.h"
/**
 * print_alphabet_x10 - print alphabets in lower case 10 times
 *
 * return- no return 
 */
void print_alphabet_x10(void)
{
  int i, letter;
for( i = 0; i < 10; i++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar (letter);
}
_putchar ('\n');
}
}
