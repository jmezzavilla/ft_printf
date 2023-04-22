/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmezzavilla <jmezzavilla@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 12:07:41 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/04/22 12:39:03 by jmezzavilla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuint(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
	{
		count += ft_putuint(n / 10);
		count += ft_putuint(n % 10);
	}
	else
	{
		count += ft_putchar(n + '0');
	}
	return (count);
}

/* int main()
{
    ft_putuint(56848);
} */