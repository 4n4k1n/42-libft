/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:02:52 by anakin            #+#    #+#             */
/*   Updated: 2025/03/09 13:47:19 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// #include <string.h>
// #include <stdio.h>
// void del_str(void *content)
// {
//     if (content)
//         free(content);
// }

// void print_list(t_list *lst)
// {
//     while (lst)
//     {
//         if (lst->content)
//             printf("%s -> ", (char *)lst->content);
//         else
//             printf("NULL -> ");
//         lst = lst->next;
//     }
//     printf("END\n");
// }

// int main(void)
// {
//     printf("\nTest 1: Normal case\n");
//     t_list *node1 = ft_lstnew(strdup("Hello"));
//     printf("Before deletion: ");
//     print_list(node1);
//     ft_lstdelone(node1, del_str);
//     printf("Node deleted\n");
//     printf("\nTest 2: Chain of nodes\n");
//     t_list *head = ft_lstnew(strdup("First"));
//     t_list *middle = ft_lstnew(strdup("Middle"));
//     t_list *last = ft_lstnew(strdup("Last"));
//     head->next = middle;
//     middle->next = last;
//     printf("Before deletion: ");
//     print_list(head);
//     t_list *temp = middle->next;
//     ft_lstdelone(middle, del_str);
//     head->next = temp;
//     printf("After deleting middle node: ");
//     print_list(head);
//     printf("\nTest 3: NULL cases\n");
//     ft_lstdelone(NULL, del_str);
//     ft_lstdelone(head, NULL);
//     ft_lstdelone(head, del_str);
//     ft_lstdelone(last, del_str);
//     printf("All tests completed\n");
//     return (0);
// }
