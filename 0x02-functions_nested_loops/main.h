#include <main.h>

/**
 *  * _putchar - writes the character c to stdout
 *   * @c: The character to print
 *    *
 *     * Return: On success 1.
 *      * On error, -1 is returned, and errno is set appropriately.
 *       */
int _putchar(char c)
{
		return (write(1, &c, 1));
}






#include "main.h"
/**
 *  * main - main block
 *   * Description: print _putchar followed on a new line
 *    * Return: always 0
 *     */

int main(void)
{
		_putchar('u');
			_putchar('\n');

				return (0);
}
