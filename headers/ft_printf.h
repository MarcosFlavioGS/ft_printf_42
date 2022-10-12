/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 05:28:22 by coder             #+#    #+#             */
/*   Updated: 2022/10/12 19:07:20 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include "libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int	ft_printf(const char *placeholders, ...);
#endif
