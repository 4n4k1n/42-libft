/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 20:12:15 by anakin            #+#    #+#             */
/*   Updated: 2025/02/04 20:14:41 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// allocate a array and set every byte to 0

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*arr;

	if (!size || !count)
		return (NULL);
	arr = malloc(count * size);
	i = 0;
	while (i < (size * count))
	{
		((unsigned char *)arr)[i] = 0;
		i++;
	}
	return (arr);
}

// #include <stdio.h>
// int main(void)
// {
//	 int *arr;

//	 arr = (int *)ft_calloc(3, sizeof(int));
//	 if (!arr)
//		 printf("can not crate!!!\n");
//	 else
//		 printf("%d\n%d\n%d\n", arr[0], arr[1], arr[2]);
//	 free(arr);
//	 return (0);
// }
