/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 11:13:14 by anakin            #+#    #+#             */
/*   Updated: 2025/03/13 11:45:31 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

#include <unistd.h>

ssize_t	ft_strclen(const char *str, char ch)
{
	ssize_t	i;

	if (!str)
		return (-1);
	i = 0;
	while (str[i])
	{
		if (str[i] == ch)
			return (i);
		i++;
	}
	return (-1);
}

// #include <stdio.h>
// int main(void)
// {
// 	// char *arr = "this is a test!";
// 	printf("%ld\n", ft_strclen(NULL, 't'));
// 	return (0);
// }
