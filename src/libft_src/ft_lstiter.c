/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:38:22 by anakin            #+#    #+#             */
/*   Updated: 2025/03/09 13:47:19 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// #include <stdio.h>
// void double_int(void *content)
// {
//     int *num = (int *)content;
//     *num *= 2;
// }

// void add_ten(void *content)
// {
//     int *num = (int *)content;
//     *num += 10;
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
//     *num1 = 5;
//     *num2 = 10;
//     *num3 = 15;
//     list = ft_lstnew(num1);
//     list->next = ft_lstnew(num2);
//     list->next->next = ft_lstnew(num3);
//     printf("Initial list: ");
//     print_list(list);
//     printf("Doubling all numbers...\n");
//     ft_lstiter(list, double_int);
//     printf("After doubling: ");
//     print_list(list);
//     printf("Adding 10 to all numbers...\n");
//     ft_lstiter(list, add_ten);
//     printf("After adding 10: ");
//     print_list(list);
//     printf("Testing with NULL list...\n");
//     ft_lstiter(NULL, double_int);
//     while (list)
//     {
//         t_list *temp = list->next;
//         free(list->content);
//         free(list);
//         list = temp;
//     }
//     return (0);
// }
