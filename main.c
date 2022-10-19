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
	printf("Test 1. All flags:\n\n");
	ret = printf("printf: %%c = %c; %%s = %s; Number = %i; %%X = %X; %%x = %x; %%p = %p; %%u = %u; Percent = %%\n", c, str, n, 10, 10, ptr, sign);
	printf("printf printed: %i characters\n", ret);
	ret = ft_printf("ft_printf: %%c = %c; %%s = %s; Number = %i; %%X = %X; %%x = %x; %%p = %p; %%u = %u; Percent = %%\n", c, str, n, 10, 10, ptr, sign) - 3;
	ft_printf("ft_printf printed: %i characters\n", ret);
	printf("\n");
	
	printf("Test 2. Separated flags: \n\n");
	
	printf("%%x flag\n");
	ret = printf("printf: %x\n", 42);
	printf("printf printed %i characters\n", ret);
	ret = ft_printf("ft_printf: %x\n", 42) - 3;
	printf("ft_printf printed %i characters\n\n", ret);
	
	printf("%%X flag\n");
	ret = printf("printf: ");
	ret += printf("%X", 42);
	ret += printf("\n");
	printf("printf printed %i characters\n", ret);
	ret = ft_printf("ft_printf: ") - 3;
	ret += ft_printf("%X", 42);
	ret += ft_printf("\n");
	printf("ft_printf printed %i characters\n\n", ret);

	printf("%%p flag\n");
	ret = printf("printf: ");
	ret += printf("%p\n", ptr);
	printf("printf printed %i characters\n", ret);
	ret = ft_printf("ft_printf: ") - 3;
	ret += ft_printf("%p\n", ptr);
	printf("ft_printf printed %i characters\n\n", ret);

	printf("%%u flag\n");
	ret = printf("printf: ");
	ret += printf("%u", 142);
	ret += printf("\n");
	printf("printf printed %i characters\n", ret);
	ret = ft_printf("ft_printf: ") - 3;
	ret += ft_printf("%u", 142);
	ret += ft_printf("\n");
	ft_printf("ft_printf printed %i characters\n\n", ret);

	ft_printf("%%u flag with negative number\n");
	ret = printf("printf: ");
	ret += printf("%u", -142);
	ret += printf("\n");
	printf("printf printed %i characters\n", ret);
	ret = ft_printf("ft_printf: ") - 3;
	ret += ft_printf("%u", -142);
	ret += ft_printf("\n");
	ft_printf("ft_printf printed %i characters\n\n", ret);

	printf("Test 3. null\n\n");

	printf("%%x flag\n");
	printf("passing 0 to %%x flag\n\n");
	
	ret = printf("printf: %x\n", 0);
	printf("printf printed %i characters\n", ret);
	ret = ft_printf("ft_printf: %x\n", 0) - 3;
	ft_printf("ft_printf printed %i characters\n\n", ret);

	printf("%%p flag\n");
	printf("Passing a null pointer to %%p\n\n");

	int	*p = NULL;
	ret = printf("printf: %p", p);
	ret += printf("\n");
	printf("printf printed %i characters\n", ret);
	ret = ft_printf("ft_printf: %p", p) - 3;
	ret += ft_printf("\n");
	ft_printf("ft_printf printed %i characters\n\n", ret);

	ft_printf("Passing direct address to %%p\n\n");

	ret = printf("printf: %p\n", &n);
	printf("printf printed %i characters\n", ret);
	ret = ft_printf("ft_printf: %p\n", &n) - 3;
	ft_printf("ft_printf printed %i characters\n\n", ret);

	ft_printf("%%s flag\n");
	ft_printf("Passing a null string to %%s\n\n");

	char	*s = NULL;
	ret = printf("printf: ");
	ret += printf("%s\n", s);
	printf("printf printed %i characters\n", ret);
	ret = ft_printf("ft_printf: ") - 3;
	ret += ft_printf("%s\n", s);
	ft_printf("ft_printf printed %i characters\n\n", ret);
	return (0);
}
