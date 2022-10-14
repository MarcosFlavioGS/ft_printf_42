#include "headers/ft_printf.h"
#include <stdio.h>

int main(void)
{
  char  c = 'A';
  char  str[] = "Hello";
  int   n = 500;
  int	*ptr = &n;
  printf("printf: char = %c; string = %s; Number = %i; HeX = %X; Hex = %x; Ptr = %p\n", c, str, n, n, n, ptr);
	ft_printf("ft_printf: char = %c; string = %s; Number = %i; HeX = %X; Hex = %x; Ptr = %p\n", c, str, n, n, n, ptr);
	return (0);
}
