#include "headers/ft_printf.h"
#include <stdio.h>

int main(void)
{
	printf("%c", ft_printf("%c%s", 10, 5.2));
	return (0);
}
