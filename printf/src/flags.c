/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovieira <jovieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:55:12 by jovieira          #+#    #+#             */
/*   Updated: 2022/11/25 15:25:12 by jovieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	format_hash(t_flags *flags, t_specifier *store)
{
	if (flags->hash == 1)
		store->rtn += write(1, "0x", 2);
}

void	format_minus(t_flags *flags, t_specifier *store)
{
	char	*info;
	char	*str;

	/*do it out side function }*/
	str = store->buffer;
	info = store->buffer;
	if (flags->minus == 1)
	{
		while (info == ft_isdigit(info))
		{
			ft_atoi(info);
		}
	}
}
