/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:36:11 by anakin            #+#    #+#             */
/*   Updated: 2025/03/09 13:47:19 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// does operations with a function pointer and a string
// allocates a new array and fills it with the changed from the func pointer
// returns NULL if the str or the func ponter is NULL and when allocation fails
// returns the allocated array if everything was succesfully

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*arr;
	int		len;

	if (!s || !f)
		return (NULL);
	len = 0;
	while (s[len])
		len++;
	arr = (char *)malloc(sizeof(char) * (len + 1));
	if (!arr)
		return (NULL);
	arr[len] = '\0';
	len = -1;
	while (s[++len])
		arr[len] = f((unsigned int)len, s[len]);
	return (arr);
}

// char f(unsigned int num, char c)
// {
// 	if (num % 3 == 0)
// 		return (' ');
// 	return (c);
// }

// #include <stdio.h>
// int main(void)
// {
// 	char *arr = ft_strmapi(NULL, &f);

// 	if (!arr)
// 		printf("can not allocate!!!\n");
// 	else
// 	{
// 		printf("%s\n", arr);
// 		free(arr);
// 	}
// 	return (0);
// }
