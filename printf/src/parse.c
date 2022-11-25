/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovieira <jovieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:15:02 by jovieira          #+#    #+#             */
/*   Updated: 2022/11/25 23:50:00 by jovieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

// int	set_flags(char const index, t_specifier *store)
// {
// 	static const t_flags	flags[] = {
// 	['#'] = flags.hash = 0;
// 	flags.minus = 0;
// 	flags.plus = 0;
// 	flags.precision = 0;
// 	flags.space = 0;
// 	flags.zero = 0;
// 	}
// 	return (flags);
// }

int	checker(t_specifier *store)
{
	int	i;
	// if (*(store)->str == '%')
	// {
	// store->str++;
	i = 0;
	while (store->str[i] != '%')
		i++;
	if (store->str[i] == '%')
		i++;
	printf("checker ->%c\n", store->str[i]);
	if (ft_strchr("cspdiuxXC%", store->str[i]))
	{
		printf("inside ->%c\n", store->str[i]);
		specifier(store->str[i], store);
	}	/*if statment whit specifier handle args*/
		// if (ft_strchr("#-+0. ", store->str))
		// {
		// 	store->str++;
		// 	/*function that do shit(check which flag)*/
		// }
	// }
	return (store->rtn);
}

// int	parsing(t_specifier	*store)
// {
// 	int	fun_p;

// 	if (store->str == '%')
// 		return (ft_putprcnt(store->rtn));
// 	while (store->str)
// 	{
// 		fun_p = specifier(store->data);
// 		if (fun_p > 0)
// /*some function that formats*/
// 			return (specifier(store->data, store->str));
// 		if (/*flags*/ < 0)
// 			return (0);
// 		store->str++;
// 	}
// 	return (store->rtn);
// }
