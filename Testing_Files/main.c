#include "main.h"
/**
 * main - sample main program
 * Return: 0 on sucess
 */
int main(void)
{
	_printf("\n\n\nThese are some example of what can be done with our mini-version of _printf!\n\n\n");
	sleep(1);

	_printf("\nPrinting Strings, Characters, and Numbers...... %s %c%drld\n\n", "ALX Program", 'b', 2022);
	sleep(1);

	_printf("Printing Reverse...... %r \n\n", "ALX Program");
	sleep(1);

	_printf("Printing Binary (base 2)...... %b \n\n", "ALX Program");
	sleep(1);

	_printf("Printing Octal (base 8)...... %o \n\n", "ALX Program");
	sleep(1);

	_printf("Printing Hexa (base 16)...... %x \n\n", "ALX Program");
	sleep(1);

	_printf("Printing Rot13 (encrypt)...... %R \n\n", "ALX Program");
	sleep(1);

	_printf("%p %S\n \n","Hello", "A B C" );
	_printf("\n\n-------------END OF THE TEST---------------\n\n\n");

	return (0);
}

