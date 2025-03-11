/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 20:12:33 by anakin            #+#    #+#             */
/*   Updated: 2025/03/10 18:08:57 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// converts a number from a given string into a int number
// handles integer overflow
// use long int for edge case

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	number;
	int				negativ;

	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	negativ = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negativ = -1;
		str++;
	}
	number = 0;
	while (*str >= '0' && *str <= '9')
	{
		number = (number * 10) + ((*str - '0') * negativ);
		str++;
	}
	return (number);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
// 	 char *str = "-2147483699";

// 	 printf("atoi	= %d\n", atoi(str));
// 	 printf("ft_atoi = %d\n", ft_atoi(str));
// 	 return (0);
// }
