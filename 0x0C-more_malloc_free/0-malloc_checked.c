#include "main.h"
/**
 * malloc_checked - Allocate memory using malloc
 * @b: size of memory block
 * Return: pointer to address
 */
void *malloc_checked(unsigned int b)
{
int *block;
block = malloc(b);
if (block ==NULL)
exit(98);
return (block);
}
