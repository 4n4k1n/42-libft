/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:17:59 by anakin            #+#    #+#             */
/*   Updated: 2025/03/09 13:47:19 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// #include <stdio.h>
// int main(void)
// {
//     int *num = malloc(sizeof(int));
//     *num = 42;
//     t_list *node1 = ft_lstnew(num);
//     if (node1 != NULL)
//     {
//         printf("Test 1 - Integer node:\n");
//         printf("Content: %d\n", *(int *)node1->content);
//         printf("Next pointer: %p\n\n", node1->next);
//     }
//     char *str = "Hello, World!";
//     t_list *node2 = ft_lstnew(str);
//     if (node2 != NULL)
//     {
//         printf("Test 2 - String node:\n");
//         printf("Content: %s\n", (char *)node2->content);
//         printf("Next pointer: %p\n\n", node2->next);
//     }
//     t_list *node3 = ft_lstnew(NULL);
//     if (node3 != NULL)
//     {
//         printf("Test 3 - NULL content node:\n");
//         printf("Content: %p\n", node3->content);
//         printf("Next pointer: %p\n", node3->next);
//     }
//     free(num);
//     free(node1);
//     free(node2);
//     free(node3);
//     return (0);
// }
