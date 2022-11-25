/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovieira <jovieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:35:34 by jovieira          #+#    #+#             */
/*   Updated: 2022/11/25 21:14:22 by jovieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char	*ft_strdup(const char *s1)
{
	const size_t	len = ft_strlen(s1);
	char			*str;

	str = malloc ((len + 1) * sizeof (char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1, len + 1);
	return (str);
}
