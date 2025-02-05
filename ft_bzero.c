/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 20:12:42 by anakin            #+#    #+#             */
/*   Updated: 2025/02/04 20:13:20 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// set the value of every byte in arr to 0 up to n position

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = (unsigned char)0;
		i++;
	}
}

// int main(void)
// {
//	 char str[] = "test test";

//	 ft_bzero(str, 2);
//	 printf("%c %c %c\n", str[0], str[1], str[2]);
//	 return (0);
// }
