/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_aph.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovieira <jovieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 23:22:17 by jovieira          #+#    #+#             */
/*   Updated: 2022/11/26 00:01:43 by jovieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_putstr(t_specifier *store)
{
	char	*info;
	int		i;

	i = 0;
	info = va_arg(store->data, char *);
	printf("info put ->%s\n", info);
	store->rtn += ft_strlen(info);
	//printf("after ->%i\n", store->rtn);
	store->buffer = ft_strjoin(store->buffer, info);
	//va_end(store->data);
	return (0);
}

// int	ft_putnbr(t_specifier *store)
// {
// 	int		nbr;
// 	char	*nb;

// 	nbr = va_arg(store->data, int);
// 	nb = ft_itoa(nbr);
// 	store->rtn += write (1, nb, ft_strlen(nb));
// 	return (0);
// }

// int	ft_putnbr_unsigned(t_specifier *store)
// {
// 	unsigned int	nbr;

// 	nbr = va_arg(store->data, unsigned int);
// 	while (nbr >= 10)
// 	{
// 		nbr /= 10;
// 		nbr %= 10;
// 		nbr += '0';
// 		nbr--;
// 	}
// 	store->rtn += write (1, &nbr, 1);
// 	return (0);
// }

int	ft_putchar(t_specifier *store)
{
	unsigned char	info;

	info = va_arg(store->data, int);
	printf("info put ->%c\n", info);
	store->rtn += write(1, &info, 1);
	store->buffer = ft_strjoin(store->buffer, (char const *)&info);
	va_end(store->data);
	return (0);
}

// int	ft_putprcnt(t_specifier *store)
// {
// 	store->rtn += write(1, '%', sizeof (char));
// 	return (0);
// }

int	put_char(t_specifier *store)
{
	write (1, store->str, 1);
	store->str++;
	store->rtn++;
	return (0);
}