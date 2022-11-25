/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovieira <jovieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 12:29:39 by jovieira          #+#    #+#             */
/*   Updated: 2022/11/20 16:31:46 by jovieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_putnbr(t_specifier *store)
{
	long	nbr;

	nbr = va_arg(store->data, int);
	if (nbr < 0)
	{
		write (1, "-", 1);
		nbr *= -1;
	}
	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	nbr %= 10;
	nbr += '0';
	write (1, &nbr, 1);
}
