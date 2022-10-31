/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovieira <jovieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:19:33 by jovieira          #+#    #+#             */
/*   Updated: 2022/10/30 15:22:05 by jovieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*r;

	r = (char *)b;
	while (len > 0)
	{
		r[len -1] = c;
		len--;
	}
	return (b);
}

// int	main()
// {
// 	char str[5] ="blab";
// 	printf("string %s ", memset(str, 'k', 2));
//  printf("string %s ", ft_memset(str, 'k', -2));
// 	return (0);
// }