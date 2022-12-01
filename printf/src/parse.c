/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovieira <jovieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 14:15:02 by jovieira          #+#    #+#             */
/*   Updated: 2022/12/01 14:59:05 by jovieira         ###   ########.fr       */
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

int	printer(t_specifier	*store)
{
	int		j;
	char	*temp;

	j = 0;
	temp = NULL;
	while (store->format[store->glob_i] != '%' && store->format)
		store->glob_i++;
	if (store->buffer == NULL)
		store->buffer = ft_substr(store->format, j, store->glob_i);
	else
	{
		temp = ft_substr(store->buffer, j, store->glob_i);
		free(store->buffer);
		store->buffer = ft_strjoin(temp, store->format);
	}
	store->rtn = ft_strlen(store->buffer);
	return (0);
}

int	checker(t_specifier *store)
{
	int	i;

	i = 0;
	if (store->format[i] == '%')
		i++;
	//printf("checker ->%c\n", store->format[i]);
	if (ft_strchr("cspdiuxXC%", store->format[i]))
	{
		//printf("inside ->%c\n", store->format[i]);
		specifier(store->format[i], store);
	}	/*if statment whit specifier handle args*/
		// if (ft_strchr("#-+0. ", store->format))
		// {
		// 	store->format++;
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
