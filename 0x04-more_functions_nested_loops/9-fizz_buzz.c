#include "main.h"

/**
 * main - prints the numbers from 1 to 100, followed by anew line
 * but for multiples of three prints fizz instead of
 * and for the multiples of five prints buzz.
 * Return: Always 0 (Success)
 */

int main(void)
	{
		int i;

		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		} else if (i == 1)
			printf("%s", i);
	} else
{
	printf("%d", 1);
			}
}
			print("\n");

			return (0);
			}
