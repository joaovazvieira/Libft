/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovieira <jovieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 21:53:14 by jovieira          #+#    #+#             */
/*   Updated: 2022/10/17 15:06:24 by jovieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	ch;
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	ch = (unsigned char)c;
	i = 0;
	while (i != n)
	{
		if (*str == ch)
			return (str);
		str++;
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char	s[]="Some of the functions";
// 	printf("result %s\n", ft_memchr(s, 'f', 7));
// 	printf("result %s", memchr(s, 'f', 7));
// 	return (0);
// }