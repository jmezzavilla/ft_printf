/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmezzavilla <jmezzavilla@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 21:59:48 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/04/20 22:59:58 by jmezzavilla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

#define HEXA_LOWER "0123456789abcdef"
#define HEXA_UPPER "0123456789ABCDEF"

int ft_printf(const char *, ...);
int	ft_putchar(char c);
int ft_putstr(char *str);
int	ft_putpointer(unsigned long int n);


#endif
