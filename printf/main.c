/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovieira <jovieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 21:44:37 by jovieira          #+#    #+#             */
/*   Updated: 2022/11/25 23:09:44 by jovieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int main(void)
{
	char	*ptr = "55555";
	ft_printf("hello %s hello %s\n", ptr, ptr);
	//printf(" %i\n", printf("%s there\n", ptr));
	return (0);
}