#include "headers/ft_printf.h"
#include <stdio.h>

int main(void)
{
  char c = 'A';
  char str[] = "Hello";
	printf("%c", ft_printf("first char: %c Now the string: %s\n", c, str));
	return (0);
}
