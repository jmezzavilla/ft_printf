/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmezzavilla <jmezzavilla@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 22:43:56 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/04/20 22:59:35 by jmezzavilla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(unsigned long int n)
{
    int count;

    count = 0;

    if(!n)
        count += ft_putstr("(nil)");
    else
    {
        if(n < 16)
        {
            count += ft_putstr("0x");
            count += ft_putchar(HEXA_LOWER[n]);
        }
        else
        {
            count += ft_putpointer(n / 16);
            count += ft_putchar(HEXA_LOWER[n%16]);
        }
    }

    return (count);
}
