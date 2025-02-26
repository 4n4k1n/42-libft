/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 20:12:33 by anakin            #+#    #+#             */
/*   Updated: 2025/02/26 22:57:13 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// converts a number from a given string into a int number
// handles integer overflow
// use long int for edge case

#include "../libft.h"

int	ft_atoi(const char *nptr)
{
	long int	number;
	int			negativ;

	while ((*nptr >= 9 && *nptr <= 13) || *nptr == ' ')
		nptr++;
	negativ = 1;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			negativ = -1;
		nptr++;
	}
	number = 0;
	while (*nptr >= '0' && *nptr <= '9')
	{
		number = (number * 10) + ((*nptr - '0') * negativ);
		if (number > 2147483647)
			return (2147483647);
		else if (number < -2147483648)
			return (-2147483648);
		nptr++;
	}
	return ((int )number);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//	 char *str = "   - 214ghasd7483647";

//	 printf("atoi	= %d\n", atoi(str));
//	 printf("ft_atoi = %d\n", ft_atoi(str));
//	 return (0);
// }
