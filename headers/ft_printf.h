/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflavio- <mfghost69@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 03:13:58 by mflavio-          #+#    #+#             */
/*   Updated: 2022/10/21 03:14:04 by mflavio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

# ifdef __APPLE__
#  define OSNULL "0x0"
# else
#  define OSNULL "(nil)"
# endif

int	ft_printf(const char *placeholders, ...);
#endif
