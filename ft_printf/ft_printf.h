/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmezzavilla <jmezzavilla@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 21:59:48 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/04/22 17:21:24 by jmezzavilla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

# define HEXA_LOWER "0123456789abcdef"
# define HEXA_UPPER "0123456789ABCDEF"
# define DECIMAL "0123456789"

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putpointer(unsigned long int n);
int	ft_putnbr_base(long long n, char *base);

#endif
