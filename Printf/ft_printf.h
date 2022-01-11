/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleroy <bleroy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:05:14 by bleroy            #+#    #+#             */
/*   Updated: 2021/11/10 12:50:07 by bleroy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

int	ft_c(unsigned char c);
int	ft_check(char c, va_list(content));
int	ft_d(int c);
int	ft_i(int c);
int	ft_p(unsigned long long c);
int	ft_u(unsigned int c);
int	ft_printf(const char *str, ...);
int	ft_s(char *str);
int	ft_x(unsigned int n, int a);
int	ft_pourcentage(char c);

#endif