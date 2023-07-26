#include "main.h"
/**
 * rot13 - encodes strings using rot13
 * @s: pointer to string
 * Return: pointer to encoded string
 */
char *rot13(char *s)
{
int index, count;
char r1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char r2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (index = 0; hi[index] != '\0'; ++index)
{
for (count = 0; r1[count] != '\0' ; count++)
{
if (hi[index] == r1[count])
{
hi[index] = r2[count];
break;
}
}
}
hi[index] = '\0';
return (hi);
}
