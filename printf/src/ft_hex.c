/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovieira <jovieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:41:15 by jovieira          #+#    #+#             */
/*   Updated: 2022/11/20 15:35:48 by jovieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	pointer_conv(t_specifier *store)
{
	const char	*info;

	info = ft_itoa(va_arg(store->data, unsigned long long), "0123456789abcdef");
	if (!info)
		return (-1);
	store->data == ft_strjoin("0x", info);
	free (info);
	if (!store->data)
		return (-1);
	return (1);
}

int	up_conv(t_specifier *store)
{
	const char	*info;

	info = ft_itoa(va_arg(store->data, unsigned int), "0123456789ABCDEF");
	if (!info)
		return (-1);
	store->data == ft_strjoin("0x", info);
	free (info);
	if (!store->data)
		return (-1);
	return (1);
}

int	low_conv(t_specifier *store)
{
	const char	*info;

	info = ft_itoa(va_arg(store->data, unsigned long long), "0123456789abcdef");
	if (!info)
		return (-1);
	store->data == ft_strjoin("0x", info);
	free (info);
	if (!store->data)
		return (-1);
	return (1);
}