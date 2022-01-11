/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleroy <bleroy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:57:55 by bleroy            #+#    #+#             */
/*   Updated: 2021/11/15 13:48:58 by bleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(char c, va_list(content))
{
	if (c == 's')
		return (ft_s(va_arg(content, char *)));
	else if (c == 'c')
		return (ft_c(va_arg(content, int)));
	else if (c == 'd' || c == 'i')
		return (ft_d(va_arg(content, int)));
	else if (c == 'p')
	{	
		write(1, "0x", 2);
		return (ft_p(va_arg(content, unsigned long long)) + 2);
	}
	else if (c == 'u')
		return (ft_u(va_arg(content, unsigned int)));
	else if (c == 'x')
		return (ft_x(va_arg(content, int), 0));
	else if (c == 'X')
		return (ft_x(va_arg(content, int), 1));
	else if (c == '%')
		return (ft_pourcentage('%'));
	return (0);
}
