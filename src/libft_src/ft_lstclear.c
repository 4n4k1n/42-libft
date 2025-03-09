/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 11:25:27 by anakin            #+#    #+#             */
/*   Updated: 2025/03/09 13:47:19 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*hold;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		hold = (*lst)->next;
		del((*lst)->content);
		free((*lst));
		*lst = hold;
	}
}

// #include <stdio.h>
// void del_int(void *content)
// {
//     free(content);
// }

// void print_list(t_list *lst)
// {
//     while (lst)
//     {
//         printf("%d -> ", *(int *)lst->content);
//         lst = lst->next;
//     }
//     printf("NULL\n");
// }

// int main(void)
// {
//     t_list *list = NULL;
//     int *num1 = malloc(sizeof(int));
//     int *num2 = malloc(sizeof(int));
//     int *num3 = malloc(sizeof(int));
//     *num1 = 42;
//     *num2 = 21;
//     *num3 = 84;
//     list = ft_lstnew(num1);
//     list->next = ft_lstnew(num2);
//     list->next->next = ft_lstnew(num3);
//     printf("Initial list: ");
//     print_list(list);
//     ft_lstclear(&list, del_int);
//     printf("After clearing: ");
//     if (list == NULL)
//         printf("List is empty\n");
//     else
//         print_list(list);
//     return (0);
// }
