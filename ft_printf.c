/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 05:29:47 by coder             #+#    #+#             */
/*   Updated: 2022/10/14 20:28:07 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/ft_printf.h"

static void	ft_swapp(char *str)
{
	char 	tmp;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(str) - 1;
	while (j > i)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
		j--;
	}
}

static void	hex_convert(int c, int ascii)
{
	int		remainder;
	int		i;
	char	*ret = malloc(100);

	i = 0;
	remainder = 0;
	while (c != 0)
	{
		remainder = c % 16;
		if (remainder < 10)
		{
			ret[i] = remainder + 48;
			i++;
		}
		else
		{
			ret[i] = remainder + ascii;
			i++;
		}
		c /= 16;
	}
	ft_swapp(ret);
	ft_putstr_fd(ret, 1);
	free(ret);
}

static void	checker(char c, va_list ap)
{
	if (c == 'c')
		return (ft_putchar_fd(va_arg(ap, int), 1));
	else if (c == 's')
		return (ft_putstr_fd(va_arg(ap, char *), 1));
	else if (c == 'p')
		return /*Ainda não sei*/;
	else if (c == 'd' || c == 'i')
		return (ft_putnbr_fd(va_arg(ap, int), 1));
	else if (c == 'u')
		return /*não sei ainda*/;
	else if (c == 'X')
		return (hex_convert(va_arg(ap, int), 55));
	else if (c == 'x')
		return (hex_convert(va_arg(ap, int), 87));
	else
		return (ft_putchar_fd(c, 1));
}

int	ft_printf(const char *placeholders, ...)
{
	va_list	ap;
	int		i;

	if (!placeholders)
		return (-1);
	i = 0;
	va_start(ap, placeholders);
	while (*placeholders)
	{
		if (*placeholders == '%')
		{
			placeholders++;
			checker(*placeholders, ap);
		}
		else
		{
			i++;
			ft_putchar_fd(*placeholders, 1);
		}
		placeholders++;
	}
	va_end(ap);
	return (i);
}
