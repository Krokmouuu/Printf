/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleroy <bleroy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:09:12 by bleroy            #+#    #+#             */
/*   Updated: 2021/11/10 12:55:42 by bleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list			content;
	int				i;
	unsigned long	j;

	i = 0;
	j = 0;
	va_start(content, str);
	while (str[i])
	{
		if (str[i] != '%')
		{
			write(1, &str[i], 1);
			j++;
		}
		if (str[i] == '%')
		{
			i++;
			j += ft_check(str[i], content);
		}
		i++;
	}
	va_end(content);
	return (j);
}
