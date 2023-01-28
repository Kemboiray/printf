#include "main.h"

/**
 * print_pointer_hash - print pointer address with prefix '0x'
 * @pointer: pointer to print
 *
 * Return: number of characters written
 */
int print_pointer_hash(void *ptr)
{
    /* for the initial '0x' characters */
    int count = 2;
    unsigned long int address = (unsigned long int) ptr;

    _putchar('0');
    _putchar('x');

    /* cast the pointer to an unsigned long*/
    /*and pass to print_unsigned_recursive_uppercase */
    count += print_unsigned_recursive_uppercase(address, 16);
    
    return (count);
}
