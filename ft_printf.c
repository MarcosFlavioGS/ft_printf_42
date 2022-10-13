/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 05:29:47 by coder             #+#    #+#             */
/*   Updated: 2022/10/14 01:55:53 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/ft_printf.h"

static void	hex_convert(int c, int x)
{
	int	remainder;

	remainder = c;
	if (x)
	{
	while (remainder % 16 != 0)
	{
		return ;
	}
	}
	else
	{
		return ;
	}
}

static void	checker(char c, va_list ap)
{
	if (c == 'c')
		return (ft_putchar_fd(va_arg(ap, int), 1));
	else if (c == 's')
		return (ft_putstr_fd(va_arg(ap, char *), 1));
	else if (c == 'p')
		return (não sei ainda);
	else if (c == 'd' || c == 'i')
		return (ft_putnbr_fd(va_arg(ap, int), 1));
	else if (c == 'u')
		return (não sei ainda);
	else if (c == 'x')
		return (hex_convert(va_arg(ap, int), 1));
	else if (c == 'X')
		return (hex_convert(va_arg(ap, int), 0));
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
