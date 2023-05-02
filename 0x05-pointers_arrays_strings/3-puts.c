/**
 * _puts - prints a string, followed by a new line to the stdout.
 * @str: string to be printed
 * Return: 0
 */
void _puts(char *str)
{
	int _putchar(char c);

while (*str)
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
