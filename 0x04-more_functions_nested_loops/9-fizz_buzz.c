#include <stdio.h>
/**
 * main - print number or fizz or buzz or fizzbuzz
 *
 * Return: return 0
 */
int main(void)
{
int num = 0;
while (num++ < 100)
{
if ((num % 3 == 0) && (num % 5 == 0))
{
printf("FizzBuzz ");
}
else if ((num % 3) == 0)
{
printf("Fizz ");
}
else if ((num % 5) == 0)
{
if (num != 100)
{
printf("Buzz ");
}
else
{
printf("Buzz");
}
}
else
{
printf("%d ", num);
}
}
printf("\n");
return (0);
}