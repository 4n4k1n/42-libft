/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 10:56:11 by anakin            #+#    #+#             */
/*   Updated: 2025/03/09 13:47:19 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cpy;

	if (!new || !lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	cpy = *lst;
	while (cpy->next)
		cpy = cpy->next;
	cpy->next = new;
}

// #include <stdio.h>
// void print_list(t_list *head)
// {
// 	t_list *current = head;
// 	printf("List contents: ");
// 	while (current)
// 	{
// 		printf("%ld -> ", (long)current->content);
// 		current = current->next;
// 	}
// 	printf("NULL\n");
// }

// int main(void)
// {
// 	t_list *list;
// 	t_list *new_node;
// 	t_list *head;
// 	t_list *tmp;
// 	list = malloc(sizeof(t_list));
// 	list->content = (void *)1;
// 	list->next = NULL;
// 	head = list;
// 	printf("Initial list:\n");
// 	print_list(head);
// 	new_node = malloc(sizeof(t_list));
// 	new_node->content = (void *)2;
// 	new_node->next = NULL;
// 	printf("\nAdding node with content 2...\n");
// 	ft_lstadd_back(&head, new_node);
// 	print_list(head);
// 	new_node = malloc(sizeof(t_list));
// 	new_node->content = (void *)3;
// 	new_node->next = NULL;
// 	printf("\nAdding node with content 3...\n");
// 	ft_lstadd_back(&head, new_node);
// 	print_list(head);
// 	list = head;
// 	while (list)
// 	{
// 		tmp = list->next;
// 		free(list);
// 		list = tmp;
// 	}
// 	return (0);
// }
