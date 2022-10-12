/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 05:29:47 by coder             #+#    #+#             */
/*   Updated: 2022/10/12 18:54:38 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/ft_printf.h"

static void	checker(char c, va_list ap)
{
	if (c == 'c')
		return (ft_putchar_fd(va_arg(ap, int), 1));
	if (c == 's')
		return (ft_putstr_fd(va_arg(ap, char *), 1));
	else
		return (ft_putchar_fd(c, 1));
}

int	ft_printf(const char *placeholders, ...)
{
	va_list	ap;
	int		i;
	int		arg_len;

	if (!placeholders)
		return (-1);
	i = 0;
	arg_len = ft_strlen(placeholders);
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
