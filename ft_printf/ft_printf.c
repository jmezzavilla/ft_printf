/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmezzavilla <jmezzavilla@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 21:47:45 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/04/19 23:37:06 by jmezzavilla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int ft_check_format(char format, va_list args){
    
    int count;
    count = 0;

    if(format == '%'){
        count += ft_putchar('%');
    }
    return count;
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	count;

	
	count = 0;
	if (!str)
		return (count);
	va_start(args, str);
	while (*str)
	{
        if (*str == '%')
		{
			count += ft_check_format(*++str, args);
		}else
        {            
            count += ft_putchar(*str++);
        }
	}
	va_end(args);
	return (count);
}

int	main(void)
{
	int count = ft_printf("Hello, %%world!\n");
	printf("%d", count);
}