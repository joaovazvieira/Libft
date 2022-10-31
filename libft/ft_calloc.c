/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovieira <jovieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:41:02 by jovieira          #+#    #+#             */
/*   Updated: 2022/10/17 15:05:34 by jovieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, size * count);
	return (ptr);
}

// int	main()
// {
// 	int		i = 30;
// 	char	*str = ft_calloc(i, sizeof (char));

// 	while (--i)
// 		if (str[i] != '\0')
// 			printf("erro %c", str[i]);
// 	return (0);
// }