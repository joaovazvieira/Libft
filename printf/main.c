/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovieira <jovieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 21:44:37 by jovieira          #+#    #+#             */
/*   Updated: 2022/11/28 18:21:23 by jovieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int main(void)
{
	char	*ptr = "66666";
	ft_printf("Hell %s", ptr);
	//printf(" %i\n", printf("%s NULL\n", ptr));
	return (0);
}