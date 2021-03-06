/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleroy <bleroy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:22:42 by bleroy            #+#    #+#             */
/*   Updated: 2021/11/09 17:44:19 by bleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_p(unsigned long long c)
{
	char	*base;
	int		j;

	j = 0;
	base = "0123456789abcdef";
	if (c >= 16)
	{
		j += ft_p((c / 16));
		j += write(1, &base[c % 16], 1);
	}
	if (c < 16)
		j += write(1, &base[c], 1);
	return (j);
}
