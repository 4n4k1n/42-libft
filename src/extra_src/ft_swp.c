/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 12:46:48 by apregitz          #+#    #+#             */
/*   Updated: 2025/05/06 13:31:27 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdio.h>

void	ft_swap(void *arr1, void *arr2, size_t size)
{
	size_t			i;
	unsigned char	*cpy1;
	unsigned char	*cpy2;

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
}

// int main(void)
// {
// 	int arr1 = 1;
// 	printf("%d\n", arr1);
// 	printf("%d\n", arr1);
// 	ft_swap(&arr1, &arr1, 4);
// 	printf("%d\n", arr1);
// 	printf("%d\n", arr1);
// 	return (0);
// }
