/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 00:43:40 by apregitz          #+#    #+#             */
/*   Updated: 2024/11/16 15:20:14 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str)
	{
		counter++;
		str++;
	}
	return (counter);
}

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
