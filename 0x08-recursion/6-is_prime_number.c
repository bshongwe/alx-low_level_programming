#include "main.h"

/**
 * actual_is_prime_number - check if n is prime number
 * @n: input n
 * @a: input iterator
 * Return: 1 (n is prime number), 0 (n is not prime number)
 */
int actual_is_prime_number(unsigned int n, unsigned int a)
{
	if (n % a == 0)
	{
		if (n == a)
		{
			return (1);
		}
		else
			return (0);
	}
	return  (0 + actual_is_prime_number(n, a + 1));
}

/**
 * is_prime_number - check if n is prime number
 * @n: input n
 * Return: 1 (n is prime number), 0 (n is not prime number)
 */
int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n > 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	return (is_prime(n, 2));
}
