/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:59:37 by anakin            #+#    #+#             */
/*   Updated: 2025/02/04 19:17:45 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int i;

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
// 		printf("cant allocate!!!\n");
// 	else
// 		printf("%s\n", arr);
// 	return (0);
// }
