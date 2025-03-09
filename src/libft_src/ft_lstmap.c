/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 17:20:22 by anakin            #+#    #+#             */
/*   Updated: 2025/03/09 13:47:19 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			if (del)
				del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// #include <stdio.h>
// #include <string.h>

// void *multiply_by_two(void *content)
// {
//	 int *num = malloc(sizeof(int));
//	 if (!num)
//		 return (NULL);
//	 *num = *(int *)content * 2;
//	 return (num);
// }

// void *to_upper(void *content)
// {
//	 char *str = strdup((char *)content);
//	 if (!str)
//		 return (NULL);
//	 for (int i = 0; str[i]; i++)
//		 if (str[i] >= 'a' && str[i] <= 'z')
//			 str[i] = str[i] - 32;
//	 return (str);
// }

// void del_int(void *content)
// {
//	 free(content);
// }

// void del_str(void *content)
// {
//	 free(content);
// }

// void print_int_list(t_list *lst)
// {
//	 while (lst)
//	 {
//		 printf("%d -> ", *(int *)lst->content);
//		 lst = lst->next;
//	 }
//	 printf("NULL\n");
// }

// void print_str_list(t_list *lst)
// {
//	 while (lst)
//	 {
//		 printf("%s -> ", (char *)lst->content);
//		 lst = lst->next;
//	 }
//	 printf("NULL\n");
// }

// int main(void)
// {
//	 printf("\n=== Test 1: Integer List ===\n");
//	 t_list *int_list = NULL;
//	 int *num1 = malloc(sizeof(int));
//	 int *num2 = malloc(sizeof(int));
//	 int *num3 = malloc(sizeof(int));
//	 *num1 = 1;
//	 *num2 = 2;
//	 *num3 = 3;
//	 ft_lstadd_back(&int_list, ft_lstnew(num1));
//	 ft_lstadd_back(&int_list, ft_lstnew(num2));
//	 ft_lstadd_back(&int_list, ft_lstnew(num3));
//	 printf("Original list: ");
//	 print_int_list(int_list);
//	 t_list *new_int_list = ft_lstmap(int_list, multiply_by_two, del_int);
//	 printf("Multiplied by 2: ");
//	 print_int_list(new_int_list);
//	 ft_lstclear(&int_list, del_int);
//	 ft_lstclear(&new_int_list, del_int);
//	 printf("\n=== Test 2: String List ===\n");
//	 t_list *str_list = NULL;
//	 ft_lstadd_back(&str_list, ft_lstnew(strdup("hello")));
//	 ft_lstadd_back(&str_list, ft_lstnew(strdup("world")));
//	 ft_lstadd_back(&str_list, ft_lstnew(strdup("42")));
//	 printf("Original list: ");
//	 print_str_list(str_list);
//	 t_list *new_str_list = ft_lstmap(str_list, to_upper, del_str);
//	 printf("Uppercase: ");
//	 print_str_list(new_str_list);
//	 ft_lstclear(&str_list, del_str);
//	 ft_lstclear(&new_str_list, del_str);
//	 printf("\n=== Test 3: NULL Tests ===\n");
//	 t_list *null_result;
//	 printf("Testing NULL list: ");
//	 null_result = ft_lstmap(NULL, multiply_by_two, del_int);
//	 if (null_result == NULL)
//		 printf("OK (returned NULL)\n");
//	 else
//		 printf("FAIL (did not return NULL)\n");
//	 printf("Testing NULL function: ");
//	 null_result = ft_lstmap(int_list, NULL, del_int);
//	 if (null_result == NULL)
//		 printf("OK (returned NULL)\n");
//	 else
//		 printf("FAIL (did not return NULL)\n");
//	 return (0);
// }
