/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_kllarr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:37:02 by apregitz          #+#    #+#             */
/*   Updated: 2025/03/25 17:44:42 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_kllarr(void *arr, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)arr)[i] ^= ((unsigned char *)arr)[i];
		i++;
	}
	return (arr);
}

// #include <stdio.h>

// int main(void)
// {
// 	char str[] = "testtest";

// 	printf("%s\n", str);
// 	ft_kllarr(str, 5);
// 	printf("%s\n", str);
// }
