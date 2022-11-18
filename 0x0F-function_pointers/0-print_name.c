#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 * @f: function to pointer
 * main - calls back the function
 * print_name - prints a name passed into it
 * print_name_uppercase - prints a name in uppercase
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
{
f(name);
}
}
void print_name_uppercase(char *name)
{
unsigned int i;
printf("Hello, my uppercase name is ");
i = 0;
while (name[i])
{
if (name[i] >= 'a' && name[i] <= 'z')
{
putchar(name[i] + 'A' - 'a');
}
else
{
putchar(name[i]);
}
i++;
}
}
void print_name_as_is(char *name)
{
printf("Hello, my name is %s\n", name);
}
int main(void)
{
print_name("Bob", print_name_as_is);
print_name("Bob Dylan", print_name_uppercase);
printf("\n");
return (0);
}
