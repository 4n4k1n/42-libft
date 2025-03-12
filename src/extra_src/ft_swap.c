/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 12:46:48 by apregitz          #+#    #+#             */
/*   Updated: 2025/03/12 13:51:02 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdio.h>

int	ft_swap(void *arr1, void *arr2, size_t size)
{
	size_t			i;
	unsigned char	*cpy1;
	unsigned char	*cpy2;

	if (!arr1 || !arr2 || !size)
		return (0);
	cpy1 = (unsigned char *)arr1;
	cpy2 = (unsigned char *)arr2;
	i = 0;
	while (i < size && cpy1[i] && cpy2[i])
	{
		cpy1[i] ^= cpy2[i];
		cpy2[i] ^= cpy1[i];
		cpy1[i] ^= cpy2[i];
		i++;
	}
	return (1);
}

// int main(void)
// {
// 	char arr1[] = "testhallo";
// 	char arr2[] = "1234";
// 	printf("%s\n", arr1);
// 	printf("%s\n", arr2);
// 	ft_swap(arr1, arr1+4, 7);
// 	printf("%s\n", arr1);
// 	printf("%s\n", arr2);
// 	return (0);
// }
