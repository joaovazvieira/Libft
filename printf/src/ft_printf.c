/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovieira <jovieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:56:13 by jovieira          #+#    #+#             */
/*   Updated: 2022/12/01 14:12:09 by jovieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "../libftprintf.h"

int	specifier(const char index, t_specifier *store)
{
	//printf("spec ->%c\n", index);
	static const t_funPointer	func[] = {
	['c'] = &ft_putchar,
	['s'] = &ft_putstr,
	// ['p'] = &pointer_conv,
	// ['d'] = &ft_putnbr,
	// ['i'] = &ft_putnbr,
	// ['u'] = &ft_putnbr_unsigned,
	// ['x'] = &low_conv,
	// ['X'] = &up_conv,
	// ['%'] = &ft_putprcnt
	};

	return (func[(unsigned int)index](store));
}

// t_flags	set_flags(void)
// {
// 	t_flags	flags;

// 	flags.hash = 0;
// 	flags.minus = 0;
// 	flags.plus = 0;
// 	flags.precision = 0;
// 	flags.space = 0;
// 	flags.zero = 0;
// 	return (flags);
// }

int	ft_printf(const char *str, ...)
{
	t_specifier	store;
	size_t		i;

	if (!str)
		return (0);
	store.rtn = 0;
	store.format = str;
	store.glob_i = 0;
	store.buffer = NULL;
	va_start(store.data, str);
	i = 0;
	while (*str)
	{
		i += i;
		if (str[i] == '%')
			checker(&store);
		while (str[i] != '%' && str[i])
		{	
			printer(&store);
			i++;
		}	
	}
	va_end(store.data);
	return (store.rtn);
}
