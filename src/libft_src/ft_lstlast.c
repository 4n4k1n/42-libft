/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 09:58:56 by anakin            #+#    #+#             */
/*   Updated: 2025/03/09 13:47:19 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// #include <stdio.h>
// int main(void)
// {
//     t_list *list;
//     t_list *tmp;
//     t_list *last;
//     int    i;
//     list = malloc(sizeof(t_list));
//     list->content = (void *)1;
//     list->next = NULL;
//     last = ft_lstlast(list);
//     printf("Single node test -"
// 		" Last node content: %ld\n", (long)last->content);
//     tmp = list;
//     i = 2;
//     while (i <= 4)
//     {
//         tmp->next = malloc(sizeof(t_list));
//         tmp = tmp->next;
//         tmp->content = (void *)(long)i;
//         tmp->next = NULL;
//         i++;
//     }
//     last = ft_lstlast(list);
//     printf("Multiple nodes test -"
// 		" Last node content: %ld\n", (long)last->content);
//     while (list)
//     {
//         tmp = list->next;
//         free(list);
//         list = tmp;
//     }
//     return (0);
// }
