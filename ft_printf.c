/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 05:29:47 by coder             #+#    #+#             */
/*   Updated: 2022/10/12 03:10:10 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *placeholders, ...)
{
	va_list	ap;
	int		i;
	int		arg_len;

	i = 0;
	arg_len = ft_strlen(placeholders);
	va_start(ap, placeholders);
	while (i < arg_len)
	{
	if (placeholders[i++] == 'd')
		{
		int x = va_arg(ap, int);
		ft_putnbr(x, 1);
		}
		else if (placeholders[i++] == 'f')
		{
			double	x = va_arg(ap, double);
			ft_putnbr_fd(x, 1);
		}
		else if (placeholders[i] == 'c')
		{
			char	x = va_arg(ap, char);
			ft_putchar_fd(x, 1);
		}
		else
			ft_putstr(placeholders);
	}
}
