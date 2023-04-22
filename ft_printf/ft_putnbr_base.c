/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmezzavilla <jmezzavilla@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 12:21:11 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/04/22 16:35:14 by jmezzavilla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *c)
{
	int	count;

	count = 0;
	while (c[count])
		count++;
	return (count);
}

int	ft_putnbr_base(long long n, char *base)
{
	int	count;
	int	size_base;

	size_base = ft_strlen(base);
	count = 0;
	if (n < 0)
	{
		count += ft_putchar('-');
		n *= -1;
	}
	if (n >= size_base)
	{
		count += ft_putnbr_base(n / size_base, base);
		count += ft_putnbr_base(n % size_base, base);
	}
	else
	{
		count += ft_putchar(base[n]);
	}
	return (count);
}
