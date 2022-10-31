/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovieira <jovieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:12:14 by jovieira          #+#    #+#             */
/*   Updated: 2022/10/17 15:05:46 by jovieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n > 0)
	{
		str[n -1] = 0;
		n--;
	}
}
// int	main(void)
// {
// 	char str[] ="ab    cde";
// 	ft_bzero(str, 4);
// 	printf("string %c ",str[5]);
// 	return (0);
// }