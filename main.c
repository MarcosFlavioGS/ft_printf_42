#include "headers/ft_printf.h"
#include <stdio.h>

int main(void)
{
  char  c = 'A';
  char  str[] = "Hello";
  int   n = 1;
  printf("printf: char = %c string = %s Number = %i\n", c, str, n);
	ft_printf("ft_printf: char = %c string = %s Number = %i\n", c, str, n);
	return (0);
}
