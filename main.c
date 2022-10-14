#include "headers/ft_printf.h"
#include <stdio.h>

int main(void)
{
  char  c = 'A';
  char  str[] = "Hello";
  int   n = 500;
  printf("printf: char = %c; string = %s; Number = %i; HeX = %X; Hex = %x\n", c, str, n, n, n);
	ft_printf("ft_printf: char = %c; string = %s; Number = %i; HeX = %X; Hex = %x\n", c, str, n, n, n);
	return (0);
}
