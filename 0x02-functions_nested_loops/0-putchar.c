#include <main.h>
/**
 * main - This prints -putchar using putchar
 *
 * Return: 0
 */
int main(void)
{
	char str[] = "-putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
		-putchar(str[ch]);
	-putchar('\n');
return (0);
}
