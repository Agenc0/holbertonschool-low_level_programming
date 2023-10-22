#include <stdio.h>

/**
 *
 */

int main(void)
{
	char lcr = 'z';

	for (; lcr >= 'a'; lcr--)
		putchar(lcr);

	putchar('\n');
	return (0);
}
