/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovieira <jovieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:13:54 by jovieira          #+#    #+#             */
/*   Updated: 2022/10/24 12:44:01 by jovieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*nstr;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len]))
		len--;
	nstr = ft_substr((char *)s1, 0, len + 1);
	return (nstr);
}

// int	main()
// {
// 	char	*str = "Tester to trim with function !";
// 	char	*set = "e";

// 	printf("str before trim %s\n", str);
// 	printf("str after trim %s\n", ft_strtrim(str, set));
// 	return (0);
// }