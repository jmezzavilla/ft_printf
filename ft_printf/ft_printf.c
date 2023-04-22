/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmezzavilla <jmezzavilla@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 21:47:45 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/04/22 12:32:44 by jmezzavilla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_format(char format, va_list args)
{
	int	count;

	count = 0;
	if (format == '%')
		count += ft_putchar('%');
	else if (format == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (format == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		count += ft_putpointer(va_arg(args, unsigned long int));
	else if (format == 'd' || format == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		count += ft_putuint(va_arg(args, unsigned int));
	else if (format == 'x')
		count += ft_putbase(va_arg(args, int), HEXA_LOWER);
	else if (format == 'X')
		count += ft_putbase(va_arg(args, int), HEXA_UPPER);
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	if (!str)
		return (count);
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			count += ft_check_format(str[++i], args);
		}
		else
		{
			count += ft_putchar(str[i]);
		}
		i++;
	}
	va_end(args);
	return (count);
}

/*  int	main(void)
{
	int count = ft_printf("%u\n",14657);
	ft_printf("%d\n", count);
	int count1 = printf("%u\n", 14657);
	printf("%d\n", count1);
}   */