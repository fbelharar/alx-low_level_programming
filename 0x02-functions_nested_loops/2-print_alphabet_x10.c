#include "main.h"
/**
 * Print 10time alphabetic 
 * return 0
 * */
void print_alphabet_x10()
{
	int i=0;
	char c;
	for (i=0; i<10;i++)
	{ 
		c='a';
		while (c<='z')
		{ 
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
