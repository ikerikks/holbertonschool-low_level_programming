#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	char size[] = "Size of";
	char bytes[] = "byte(s)";

	printf("%s a char: %d %s", size, sizeof(char), bytes);
	printf("%s a char: %d %s", size, sizeof(int), bytes);
	printf("%s a char: %d %s", size, sizeof(long int), bytes);
	printf("%s a char: %d %s", size, sizeof(long long int), bytes);
	printf("%s a char: %d %s", size, sizeof(float), bytes);


return (0);


}
