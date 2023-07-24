#include "main.h"
/**
 * _strcpy - copy string to dest
 * @dest: pointer to buffer
 * @src: pointer to string
 * Return: return pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int len, i;
len = 0;
while (src[len] != '\0')
{
len++;
}
for (i = 0; i < len; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
