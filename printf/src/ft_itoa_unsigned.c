/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovieira <jovieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:41:45 by jovieira          #+#    #+#             */
/*   Updated: 2022/11/20 15:30:27 by jovieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

static int	len(unsigned long long nb, size_t mod)
{
	int		len;

	len = 0;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 0)
	{
		nb /= mod;
		len++;
	}
	return (len);
}

char	*ft_itoa(unsigned long long nb, char *base)
{
	char	*str;
	int		i;
	size_t	mod;

	mod = ft_strlen(base);
	i = len(nb, mod);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	if (nb == 0)
		str[0] = '0';
	while (nb)
	{
		str[i - 1] = base[nb % mod];
		nb /= mod;
		i--;
	}
	return (str);
}
