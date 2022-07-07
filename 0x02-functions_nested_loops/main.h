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










#include "main.h"

/**
 *  * print_alphabet - entry point
 *   * Return: 0 Success
 *    */
void print_alphabet(void)
{
		char j;

			for (j = 'a'; j <= 'z'; j++)
					{
								_putchar(j);
									}
				_putchar('\n');
}







#include "main.h"

/**
 *  * main - Prints Holberton as a message.
 *   *
 *    * Return: Always 0 (Success)
 *     */
int main(void)
{
		_putchar('r');
		_putchar('\n');
				
		return (0);
}
