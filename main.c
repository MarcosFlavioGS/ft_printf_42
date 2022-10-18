#include "headers/ft_printf.h"
#include <stdio.h>

int main(void)
{
  char  c = 'A';
  char  str[] = "Hello";
  int   n = 500;
  int	sign = -2;
  int	*ptr = &n;
  int	ret;

  ret = 0;
  ret = printf("printf: char = %c; string = %s; Number = %i; HeX = %X; Hex = %x; Ptr = %p; Signed = %u; Percent = %%\n", c, str, n, 10, 10, ptr, sign);
  printf("printf printed: %i characters\n", ret);
  ret = ft_printf("ft_printf: char = %c; string = %s; Number = %i; HeX = %X; Hex = %x; Ptr = %p; Signed = %u; Percent = %%\n", c, str, n, 10, 10, ptr, sign) - 3;
  ft_printf("ft_printf printed: %i characters\n", ret);
  return (0);
}
