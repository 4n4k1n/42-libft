/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 20:07:22 by anakin            #+#    #+#             */
/*   Updated: 2025/03/09 13:47:19 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>
// int main(void)
// {
// 	t_list *list = NULL;
// 	int *num1 = malloc(sizeof(int));
// 	*num1 = 42;
// 	list = ft_lstnew(num1);
// 	int *num2 = malloc(sizeof(int));
// 	*num2 = 21;
// 	t_list *new_node = ft_lstnew(num2);
// 	printf("Before adding to front:\n");
// 	printf("First node content: %d\n", *(int*)list->content);
// 	ft_lstadd_front(&list, new_node);
// 	printf("\nAfter adding to front:\n");
// 	printf("First node content: %d\n", *(int*)list->content);
// 	printf("Second node content: %d\n", *(int*)list->next->content);
// 	free(num1);
// 	free(num2);
// 	free(list->next);
// 	free(list);
// 	return (0);
// }
