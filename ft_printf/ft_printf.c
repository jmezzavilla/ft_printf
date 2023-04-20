/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmezzavilla <jmezzavilla@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 21:47:45 by jmezzavilla       #+#    #+#             */
/*   Updated: 2023/04/20 23:01:54 by jmezzavilla      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_check_format(char format, va_list args){
    
    int count;
    count = 0;

    if(format == '%')
        count += ft_putchar('%');
	else if(format == 'c')
		count += ft_putchar('c');
	else if(format == 's')
		count += ft_putstr(va_arg(args, char *));
	else if(format == 'p')
		count += ft_putpointer(va_arg(args, unsigned long int));
    return count;
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	count;
	size_t i;

	
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
		}else
        {            
            count += ft_putchar(str[i]);
        }
		i++;
	}
	va_end(args);
	return (count);
}

int	main(void)
{
	int count = ft_printf("%p\n","Jessica");
	printf("%d\n", count);
	printf("%p", "Jessica");
} 