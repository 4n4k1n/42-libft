/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 20:15:45 by anakin            #+#    #+#             */
/*   Updated: 2025/03/09 13:47:19 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	len;

	len = 0;
	while (lst)
	{
		lst = lst->next;
		len++;
	}
	return (len);
}

// #include <stdio.h>
// int main(void)
// {
//     t_list *list;
//     t_list *tmp;
//     int i;
//     list = NULL;
//     printf("Empty list size: %d\n", ft_lstsize(list));
//     list = malloc(sizeof(t_list));
//     list->next = NULL;
//     printf("One node size: %d\n", ft_lstsize(list));
//     i = 0;
//     tmp = list;
//     while (i < 3)
//     {
//         tmp->next = malloc(sizeof(t_list));
//         tmp = tmp->next;
//         tmp->next = NULL;
//         i++;
//     }
//     printf("Four nodes size: %d\n", ft_lstsize(list));
//     while (list)
//     {
//         tmp = list->next;
//         free(list);
//         list = tmp;
//     }
//     return (0);
// }
