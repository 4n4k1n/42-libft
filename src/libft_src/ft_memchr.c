/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 20:25:45 by anakin            #+#    #+#             */
/*   Updated: 2025/03/09 13:47:19 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// search in the array s for c
// if found return the address of the found character
// else return NULL
// uses unsinged char to step through every single byte

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)((unsigned char *)s + i));
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//	 char *str = "this is a test!";
//	 char *dest;

//	 dest = ft_memchr(str, 'a', 9);
//	 if (!dest)
//		 printf("Not found!!!\n");
//	 else
//		 printf("%s\n", dest);
//	 return (0);
// }
