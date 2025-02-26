/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 00:43:40 by apregitz          #+#    #+#             */
/*   Updated: 2025/02/26 23:00:25 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// calculates the lenght of a sting and returns it

#include "../libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	counter;

	counter = 0;
	while (*s)
	{
		counter++;
		s++;
	}
	return (counter);
}

// #include <stdio.h>
/* int	main(void)
{
	int		len;
	char	str[5];

	len = 0;
	str[0] = 't';
	str[1] = 'e';
	str[2] = 's';
	str[3] = 't';
	len = ft_strlen(str);
	printf("%d", len);
	return (0);
} */
