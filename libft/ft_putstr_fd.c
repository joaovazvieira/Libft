/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovieira <jovieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:43:58 by jovieira          #+#    #+#             */
/*   Updated: 2022/10/21 11:55:51 by jovieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s != '\0')
		write(fd, s, ft_strlen(s));
}

// int	main()
// {
// 	char	*str = "Testing function !";
// 	ft_putstr_fd(str, 1);
// 	return (0);
// }