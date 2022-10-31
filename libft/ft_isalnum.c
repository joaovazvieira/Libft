/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovieira <jovieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:29:09 by jovieira          #+#    #+#             */
/*   Updated: 2022/10/24 19:21:25 by jovieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c < 91) || (c >= 97 && c < 123))
		return (1);
	else if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// int main()
// {
// 	char	c;

// 	c = '=';
// 	ft_isalnum(c);
// 	return (0);
// }