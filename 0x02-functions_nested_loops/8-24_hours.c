#include "main.h"

/**
 * jack_bauer - A function that prints
 * every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 *
 * Return: Void
 */

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = '0'; i <= '2'; i++)
	{


		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k < '6'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					if ((i == '2') && (j >= '4'))
					{
						continue;
					}
					else
					{
						_putchar(i);
						_putchar(j);
						_putchar(':');
						_putchar(k);
						_putchar(l);
						_putchar('\n');
					}
				}
			}
		}
	}
}
