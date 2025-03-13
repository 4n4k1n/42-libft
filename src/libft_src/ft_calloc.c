/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 20:12:15 by anakin            #+#    #+#             */
/*   Updated: 2025/03/13 01:52:52 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// allocate a array and set every byte to 0

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*arr;

	if (size != 0 && count > ~(size_t)0 / size)
		return (NULL);
	arr = malloc(count * size);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < (size * count))
	{
		((unsigned char *)arr)[i] = 0;
		i++;
	}
	return (arr);
}

// #include <stdio.h>clear
// int main(void)
// {
//     int *arr;
//     size_t large_but_not_too_large = ((size_t)-1) / sizeof(int) + 1;
//     printf("Testing with count: %zu\n", large_but_not_too_large);
//     arr = (int *)ft_calloc(large_but_not_too_large, sizeof(int));
//     if (!arr)
//         printf("Correctly detected overflow and returned NULL\n");
//     else {
//         printf("%d\n%d\n%d\n", arr[0], arr[1], arr[2]);
//         free(arr);
//     }
//     arr = (int *)ft_calloc(5, sizeof(int));
//     if (!arr)
//         printf("Failed to allocate a small array!\n");
//     else {
//         printf("Small allocation successful: %d %d %d\n",
// arr[0], arr[1], arr[2]);
//         free(arr);
//     }
//     return (0);
// }
