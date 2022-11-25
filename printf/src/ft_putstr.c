/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovieira <jovieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:30:33 by jovieira          #+#    #+#             */
/*   Updated: 2022/11/25 23:22:43 by jovieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_putstr(t_specifier *store)
{
	char	*info;

	info = va_arg(store->data, char *);
	store->rtn += write(1, info, ft_strlen(info));
}

int	ft_putchar(t_specifier *store)
{
	char	*info;

	info = va_arg(store->data, char);
	store->rtn += write(1, info, sizeof (char));
	return (0);
}
