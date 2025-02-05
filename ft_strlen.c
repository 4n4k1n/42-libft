/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 00:43:40 by apregitz          #+#    #+#             */
/*   Updated: 2025/02/05 14:29:24 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// calculates the lenght of a sting and returns it

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
