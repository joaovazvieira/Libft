/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jovieira <jovieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:30:10 by jovieira          #+#    #+#             */
/*   Updated: 2022/10/27 20:16:44 by jovieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (head == NULL)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}

// int main()
// {
// 	char	*str = "the cake is fake!";
// 	t_list	*test;

// 	test = ft_lstnew(str);
// 	printf("test %s\n", test->content);
// 	return (0);
// }

// while (list->content != 5)
// {
// 	list = list->next;
// }
