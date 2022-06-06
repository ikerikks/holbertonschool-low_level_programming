#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	char size[] = "Size of";
	char bytes[] = "byte(s)";

	printf("%s a char: %d %s\n", size, sizeof(char), bytes);
	printf("%s an int: %d %s\n", size, sizeof(int), bytes);
	printf("%s a long int: %d %s\n", size, sizeof(long int), bytes);
	printf("%s a long long int: %d %s\n", size, sizeof(long long int), bytes);
	printf("%s a float: %d %s\n", size, sizeof(float), bytes);


return (0);


}
