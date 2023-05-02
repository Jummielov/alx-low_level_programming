/**
 * puts_half - prints second half of a given string.
 * starting with the \  first character, followed by a new line.
 * @str: string to be printed.
 * Return: 0
 */
void puts_half(char *str)
{
	int _putchar();
	int count = 0;
	int i;

	while (*str)
	{
		count++;
		str++;
	}
	for (i = 0; i < count; i++)
		str--;
	i = (count % 2 == 0) ? count / 2 : (count + 1) / 2;
	for (; i < count; i++)
		_putchar(str[i]);
	_putchar('\n');
}
