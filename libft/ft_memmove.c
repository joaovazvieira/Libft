/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovieira <jovieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:41:00 by jovieira          #+#    #+#             */
/*   Updated: 2022/10/17 15:26:51 by jovieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	c;
	char	*d;
	char	*s;

	c = 0;
	d = (char *)dst;
	s = (char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (d > s)
	{
		while (len-- > 0)
				d[len] = s[len];
	}			
	else
	{
		while (c < len)
		{
			d[c] = s[c];
			c++;
		}
	}	
	return (dst);
}

// int main(void)
// {
// 	char	src[30]="original";
// 	char	dst[15]="after";
// 	printf("src %s\n", src);
// 	printf("dst %s\n", dst);
// 	printf("dst after %s", ft_memmove(dst, src, 9));
// 	return (0);
// }