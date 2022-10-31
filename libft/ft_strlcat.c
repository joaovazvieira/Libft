/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovieira <jovieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:03:38 by jovieira          #+#    #+#             */
/*   Updated: 2022/10/31 15:58:10 by jovieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	mem;
	size_t	i;
	char	*s;

	if (dstsize == 0)
		return (ft_strlen(src));
	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	mem = len_src + dstsize;
	i = 0;
	s = (char *)src;
	if (dstsize > len_dst)
		mem = len_src + len_dst;
	while (s[i] && (len_dst + 1) < dstsize)
	{
		dst[len_dst] = src[i];
		len_dst++;
		i++;
	}
	dst[len_dst] = '\0';
	return (mem);
}

// int main()
// {
// 	char	*str = "pqrstuvwxyz";
// 	char	*str2 = "abcd";
// 	printf("result %zu\n", ft_strlcat(str, str2, 20));
// 	printf("result %lu\n", strlcat(str, str2, 20));
// 	return (0);
// }