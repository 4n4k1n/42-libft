/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:59:37 by anakin            #+#    #+#             */
/*   Updated: 2025/03/09 13:47:19 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// function does a simple pointert function operation
// return nothing if the string is empty or there is not function 

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s || !f)
		return ;
	i = -1;
	while (s[++i])
		f((unsigned int)i, &s[i]);
}

// void f(unsigned int num, char *c)
// {
// 	if (num % 2 == 0)
// 		*c = ' ';
// }

// #include <stdio.h>
// int main(void)
// {
// 	char *arr = NULL;

// 	ft_striteri(arr, &f);
// 	if (!arr)
// 		printf("error!!!\n");
// 	else
// 		printf("%s\n", arr);
// 	return (0);
// }
