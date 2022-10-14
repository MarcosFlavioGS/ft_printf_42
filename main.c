#include "headers/ft_printf.h"
#include <stdio.h>

int main(void)
{
  char  c = 'A';
  char  str[] = "Hello";
  int   n = 500;
  int	sign = -2;
  int	*ptr = &n;
  printf("printf: char = %c; string = %s; Number = %i; HeX = %X; Hex = %x; Ptr = %p; Signed = %u\n", c, str, n, n, n, ptr, sign);
	ft_printf("ft_printf: char = %c; string = %s; Number = %i; HeX = %X; Hex = %x; Ptr = %p; Signed = %u\n", c, str, n, n, n, ptr, sign);
	return (0);
}
